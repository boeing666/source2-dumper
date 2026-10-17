#pragma once

class C_BaseCombatCharacter : public C_BaseAnimatingOverlay /*0x0*/  // sizeof 0xC50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // offset 0xBB0, size 0x18, align 8 | MNotSaved
    char _pad_0BC8[0x18]; // offset 0xBC8
    AttachmentHandle_t m_leftFootAttachment; // offset 0xBE0, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_rightFootAttachment; // offset 0xBE1, size 0x1, align 255 | MNotSaved
    char _pad_0BE2[0x2]; // offset 0xBE2
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // offset 0xBE4, size 0x4, align 4 | MNotSaved
    float32 m_flWaterWorldZ; // offset 0xBE8, size 0x4, align 4 | MNotSaved
    float32 m_flWaterNextTraceTime; // offset 0xBEC, size 0x4, align 4 | MNotSaved
    char _pad_0BF0[0x60]; // offset 0xBF0
};
