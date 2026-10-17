#pragma once

class C_BaseCombatCharacter : public C_BaseAnimatingOverlay /*0x0*/  // sizeof 0xDD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD38]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // offset 0xD38, size 0x18, align 8 | MNotSaved
    char _pad_0D50[0x18]; // offset 0xD50
    AttachmentHandle_t m_leftFootAttachment; // offset 0xD68, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_rightFootAttachment; // offset 0xD69, size 0x1, align 255 | MNotSaved
    char _pad_0D6A[0x2]; // offset 0xD6A
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // offset 0xD6C, size 0x4, align 4 | MNotSaved
    float32 m_flWaterWorldZ; // offset 0xD70, size 0x4, align 4 | MNotSaved
    float32 m_flWaterNextTraceTime; // offset 0xD74, size 0x4, align 4 | MNotSaved
    char _pad_0D78[0x60]; // offset 0xD78
};
