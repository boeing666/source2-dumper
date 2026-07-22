#pragma once

class CAnimEventDefinition  // sizeof 0x40, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nFrame; // offset 0x8, size 0x4, align 4
    int32 m_nEndFrame; // offset 0xC, size 0x4, align 4
    float32 m_flCycle; // offset 0x10, size 0x4, align 4
    float32 m_flDuration; // offset 0x14, size 0x4, align 4
    KeyValues3 m_EventData; // offset 0x18, size 0x10, align 8
    CBufferString m_sLegacyOptions; // offset 0x28, size 0x10, align 8 | MKV3TransferName
    CGlobalSymbol m_sEventName; // offset 0x38, size 0x8, align 8
};
