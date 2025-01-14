#include "DummyModule.h"

DummyModule::DummyModule() {}

const std::string DummyModule::name()
{
    return "Dummy";
}

const std::string DummyModule::version()
{
    // hides the module in the version output on the console, because the firmware version is sufficient.
    return "";
}

void DummyModule::setup(bool configured)
{
    // delay(1000);
    // logInfoP("Setup0");
    logIndentUp();

    if (configured)
    {
        setupCustomFlash();
        setupChannels();
    }
    logIndentDown();
}

void DummyModule::setupChannels()
{
    for (uint8_t i = 0; i < ParamDMY_VisibleChannels; i++)
    {
        _channels[i] = new DummyChannel(i);
        _channels[i]->setup();
    }
}

void DummyModule::setupCustomFlash()
{
    logDebugP("initialize dummy flash");
    OpenKNX::Flash::Driver _dummyStorage;
#ifdef ARDUINO_ARCH_ESP32
    _dummyStorage.init("dummy");
#else
    _dummyStorage.init("dummy", DUMMY_FLASH_OFFSET, DUMMY_FLASH_SIZE);
#endif

    logTraceP("write dummy data");
    // _dummyStorage.writeByte(0, 0x11);
    // _dummyStorage.writeWord(1, 0xFFFF);
    // _dummyStorage.writeInt(3, 6666666);
    // for (size_t i = 0; i < 4095; i++)
    // {
    //     _dummyStorage.writeByte(i, i);
    // }
    // _dummyStorage.commit();

    logDebugP("read dummy data");
    logIndentUp();
    // logHexDebugP(_dummyStorage.flashAddress(), 4095);
    // logDebugP("byte: %02X", _dummyStorage.readByte(0)); // UINT8
    // logDebugP("word: %i", _dummyStorage.readWord(1));   // UINT16
    // logDebugP("int: %i", _dummyStorage.readInt(3));     // UINT32

    logIndentDown();
}

void DummyModule::loop(bool configured)
{
    if (delayCheck(_timer1, 5100))
    {
        // logInfoP("Loop0");
        _timer1 = millis();
    }

    if (configured)
    {
        if (ParamDMY_VisibleChannels == 0) return;

        uint8_t processed = 0;
        do
            _channels[_currentChannel]->loop();

        while (openknx.freeLoopIterate(ParamDMY_VisibleChannels, _currentChannel, processed));
    }
}

#ifdef OPENKNX_DUALCORE

void DummyModule::setup1(bool configured)
{
    delay(1000);
    // logInfoP("Setup1");
}

void DummyModule::loop1(bool configured)
{
    if (delayCheck(_timer2, 7200))
    {
        // logInfoP("Loop1");
        _timer2 = millis();
    }
}
#endif

void DummyModule::processInputKo(GroupObject& ko)
{
    // logDebugP("processInputKo GA%04X", ko.asap());
    // logHexDebugP(ko.valueRef(), ko.valueSize());
}

void DummyModule::showHelp()
{
    openknx.console.printHelpLine("dummy", "Print a dummy text");
}

bool DummyModule::processCommand(const std::string cmd, bool diagnoseKo)
{
    if (cmd.substr(0, 5) == "dummy")
    {
        logInfoP("Dummy Info");
        logIndentUp();
        logInfoP("Info 1");
        logInfoP("Info 2");
        logIndentUp();
        logInfoP("Info 2a");
        logInfoP("Info 2b");
        logIndentDown();
        logInfoP("Info 3");
        logIndentDown();
        return true;
    }

    return false;
}

#ifdef ARDUINO_ARCH_RP2040
    #ifndef OPENKNX_USB_EXCHANGE_IGNORE
void DummyModule::registerUsbExchangeCallbacks()
{
    // Sample
    openknxUsbExchangeModule.onLoad("Dummy.txt", [](UsbExchangeFile* file) -> void {
        file->write("Demo");
    });
    openknxUsbExchangeModule.onEject("Dummy.txt", [](UsbExchangeFile* file) -> bool {
        // File is required
        if (file == nullptr)
        {
            logError("DummyModule", "File Dummy.txt was deleted but is mandatory");
            return false;
        }
        return true;
    });
}
    #endif
#endif

DummyModule openknxDummyModule;