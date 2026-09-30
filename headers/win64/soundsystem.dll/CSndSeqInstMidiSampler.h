#pragma once

class CSndSeqInstMidiSampler : public CSndSeqInstBaseSchema /*0x0*/  // sizeof 0xE0, align 0x8 [vtable] (soundsystem) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    bool m_bIsSoundEvent; // offset 0x20, size 0x1, align 1
    bool m_bStopPrevious; // offset 0x21, size 0x1, align 1
    uint8 m_nMinNote; // offset 0x22, size 0x1, align 1
    uint8 m_nMaxNote; // offset 0x23, size 0x1, align 1
    float32 m_flMinVelocityAtten; // offset 0x24, size 0x4, align 4
    float32 m_flMaxVelocityAtten; // offset 0x28, size 0x4, align 4
    float32 m_flAttack; // offset 0x2C, size 0x4, align 4
    float32 m_flRelease; // offset 0x30, size 0x4, align 4
    bool m_bBeatEnvelopes; // offset 0x34, size 0x1, align 1
    char _pad_0035[0x9F]; // offset 0x35
    uint8 m_nNextVoiceSlot; // offset 0xD4, size 0x1, align 1
    char _pad_00D5[0x3]; // offset 0xD5
    uint32 m_hSoundEventHash; // offset 0xD8, size 0x4, align 4
    char _pad_00DC[0x4]; // offset 0xDC
};
