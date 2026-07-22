#pragma once

class CSndSeqInstBaseSchema  // sizeof 0x20, align 0xFF [vtable abstract] (soundsystem) {MGetKV3ClassDefaults MPropertyAutoExpandSelf MPropertyPolymorphicClass}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    SndSeqInstrumentType_t m_nType; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x2]; // offset 0xC
    bool m_bStopCurrentEvents; // offset 0xE, size 0x1, align 1
    char _pad_000F[0x1]; // offset 0xF
    float32 m_flBPM; // offset 0x10, size 0x4, align 4
    float32 m_flBPMFactor; // offset 0x14, size 0x4, align 4
    float32 m_flBPMInvFactor; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
