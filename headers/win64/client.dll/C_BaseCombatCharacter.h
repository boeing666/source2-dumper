#pragma once

class C_BaseCombatCharacter : public CBaseAnimGraph /*0x0*/  // sizeof 0x1208, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // offset 0x1180, size 0x18, align 8 | MNotSaved
    AttachmentHandle_t m_leftFootAttachment; // offset 0x1198, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_rightFootAttachment; // offset 0x1199, size 0x1, align 255 | MNotSaved
    char _pad_119A[0x2]; // offset 0x119A
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // offset 0x119C, size 0x4, align 4 | MNotSaved
    float32 m_flWaterWorldZ; // offset 0x11A0, size 0x4, align 4 | MNotSaved
    float32 m_flWaterNextTraceTime; // offset 0x11A4, size 0x4, align 4 | MNotSaved
    char _pad_11A8[0x60]; // offset 0x11A8
};
