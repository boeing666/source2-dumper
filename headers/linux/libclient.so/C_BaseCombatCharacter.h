#pragma once

class C_BaseCombatCharacter : public C_BaseAnimatingOverlay /*0x0*/  // sizeof 0xE40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // offset 0xDA0, size 0x18, align 8 | MNotSaved
    char _pad_0DB8[0x18]; // offset 0xDB8
    AttachmentHandle_t m_leftFootAttachment; // offset 0xDD0, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_rightFootAttachment; // offset 0xDD1, size 0x1, align 255 | MNotSaved
    char _pad_0DD2[0x2]; // offset 0xDD2
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // offset 0xDD4, size 0x4, align 4 | MNotSaved
    float32 m_flWaterWorldZ; // offset 0xDD8, size 0x4, align 4 | MNotSaved
    float32 m_flWaterNextTraceTime; // offset 0xDDC, size 0x4, align 4 | MNotSaved
    char _pad_0DE0[0x60]; // offset 0xDE0
};
