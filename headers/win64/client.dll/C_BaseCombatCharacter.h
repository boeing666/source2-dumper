#pragma once

class C_BaseCombatCharacter : public C_BaseAnimatingOverlay /*0x0*/  // sizeof 0xCB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // offset 0xC10, size 0x18, align 8 | MNotSaved
    char _pad_0C28[0x18]; // offset 0xC28
    AttachmentHandle_t m_leftFootAttachment; // offset 0xC40, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_rightFootAttachment; // offset 0xC41, size 0x1, align 255 | MNotSaved
    char _pad_0C42[0x2]; // offset 0xC42
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // offset 0xC44, size 0x4, align 4 | MNotSaved
    float32 m_flWaterWorldZ; // offset 0xC48, size 0x4, align 4 | MNotSaved
    float32 m_flWaterNextTraceTime; // offset 0xC4C, size 0x4, align 4 | MNotSaved
    char _pad_0C50[0x60]; // offset 0xC50
};
