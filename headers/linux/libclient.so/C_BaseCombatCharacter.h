#pragma once

class C_BaseCombatCharacter : public C_BaseAnimatingOverlay /*0x0*/  // sizeof 0xCE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC48]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // offset 0xC48, size 0x18, align 8 | MNotSaved
    char _pad_0C60[0x18]; // offset 0xC60
    AttachmentHandle_t m_leftFootAttachment; // offset 0xC78, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_rightFootAttachment; // offset 0xC79, size 0x1, align 255 | MNotSaved
    char _pad_0C7A[0x2]; // offset 0xC7A
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // offset 0xC7C, size 0x4, align 4 | MNotSaved
    float32 m_flWaterWorldZ; // offset 0xC80, size 0x4, align 4 | MNotSaved
    float32 m_flWaterNextTraceTime; // offset 0xC84, size 0x4, align 4 | MNotSaved
    char _pad_0C88[0x60]; // offset 0xC88
};
