#pragma once

class CVMixBaseGraphDescription  // sizeof 0xD0, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8 | MKV3TransferName
    int32 m_nGraphOutputChannels; // offset 0x8, size 0x4, align 4
    bool m_bIsMainGraph; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    CUtlLeanVector< std::unique_ptr< CVMixBaseProcessorDesc > > m_processorNodes; // offset 0x10, size 0x10, align 8 | MKV3TransferName
    CUtlLeanVector< CVMixGraphInput > m_graphInputs; // offset 0x20, size 0x10, align 8
    CUtlLeanVector< CVMixControlInput > m_controlTransientInputs; // offset 0x30, size 0x10, align 8
    CUtlLeanVector< CVMixControlOutput > m_controlOutputs; // offset 0x40, size 0x10, align 8
    CUtlLeanVector< CVMixImpulseResponseInput > m_impulseResponseInputs; // offset 0x50, size 0x10, align 8
    CUtlLeanVector< CVMixCommand > m_mixCommands; // offset 0x60, size 0x10, align 8 | MKV3TransferName
    CVMixHeap m_heap; // offset 0x70, size 0x10, align 8
    CUtlLeanVector< CVMixAudioMeter > m_audioMeters; // offset 0x80, size 0x10, align 8
    CUtlLeanVector< CVMixControlMeter > m_controlMeters; // offset 0x90, size 0x10, align 8
    CUtlLeanVector< CVMixNameInputMeter > m_nameInputMeters; // offset 0xA0, size 0x10, align 8
    CUtlLeanVector< CVMixAdditionalOutput > m_additionalOutputs; // offset 0xB0, size 0x10, align 8
    CUtlLeanVector< CVMixAutomaticControlInput > m_automaticControlInputs; // offset 0xC0, size 0x10, align 8
};
