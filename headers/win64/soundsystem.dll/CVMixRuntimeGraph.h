#pragma once

class CVMixRuntimeGraph  // sizeof 0x200, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8 | MKV3TransferName
    int32 m_nGraphOutputChannels; // offset 0x8, size 0x4, align 4
    bool m_bIsMainGraph; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    CUtlVector< CVMixSubmix > m_submixes; // offset 0x10, size 0x18, align 8 | MKV3TransferName
    CUtlVector< std::unique_ptr< CVMixBaseProcessorDesc > > m_processorNodes; // offset 0x28, size 0x18, align 8 | MKV3TransferName
    CUtlVector< CVMixControlInput > m_controlInputs; // offset 0x40, size 0x18, align 8
    CUtlVector< CVMixControlInput > m_controlTransientInputs; // offset 0x58, size 0x18, align 8
    CUtlVector< CVMixControlInputArray > m_controlInputArrays; // offset 0x70, size 0x18, align 8
    CUtlVector< CVMixControlOutput > m_controlOutputs; // offset 0x88, size 0x18, align 8
    CUtlVector< CVMixNameInput > m_nameInputs; // offset 0xA0, size 0x18, align 8
    CUtlVector< CVMixVsndInput > m_vsndInputs; // offset 0xB8, size 0x18, align 8
    CUtlVector< CVMixImpulseResponseInput > m_impulseResponseInputs; // offset 0xD0, size 0x18, align 8
    CUtlVector< CVMixCommand > m_mixCommands; // offset 0xE8, size 0x18, align 8 | MKV3TransferName
    CUtlVector< float32 > m_values; // offset 0x100, size 0x18, align 8
    CUtlVector< CUtlVector< float32 > > m_valueArrays; // offset 0x118, size 0x18, align 8
    CUtlVector< uint64 > m_impulseResponseValues; // offset 0x130, size 0x18, align 8
    CUtlVector< float32 > m_controlPoints; // offset 0x148, size 0x18, align 8
    CUtlVector< CVMixCurveHeader > m_curves; // offset 0x160, size 0x18, align 8
    CUtlVector< CVMixAudioMeter > m_audioMeters; // offset 0x178, size 0x18, align 8
    CUtlVector< CVMixControlMeter > m_controlMeters; // offset 0x190, size 0x18, align 8
    CUtlVector< CVMixNameInputMeter > m_nameInputMeters; // offset 0x1A8, size 0x18, align 8
    CUtlVector< CVMixAdditionalOutput > m_additionalOutputs; // offset 0x1C0, size 0x18, align 8
    CUtlVector< CVMixAutomaticControlInput > m_automaticControlInputs; // offset 0x1D8, size 0x18, align 8
    KeyValues3 m_sources; // offset 0x1F0, size 0x10, align 8
};
