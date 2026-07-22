#pragma once

class C_BaseCombatCharacter : public C_BaseAnimatingOverlay /*0x0*/  // sizeof 0xB60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAC0]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // offset 0xAC0, size 0x18, align 8 | MNotSaved
    char _pad_0AD8[0x18]; // offset 0xAD8
    AttachmentHandle_t m_leftFootAttachment; // offset 0xAF0, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_rightFootAttachment; // offset 0xAF1, size 0x1, align 255 | MNotSaved
    char _pad_0AF2[0x2]; // offset 0xAF2
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // offset 0xAF4, size 0x4, align 4 | MNotSaved
    float32 m_flWaterWorldZ; // offset 0xAF8, size 0x4, align 4 | MNotSaved
    float32 m_flWaterNextTraceTime; // offset 0xAFC, size 0x4, align 4 | MNotSaved
    char _pad_0B00[0x60]; // offset 0xB00
};
