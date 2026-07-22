#pragma once

class C_BaseCombatCharacter : public CBaseAnimGraph /*0x0*/  // sizeof 0x1190, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1108]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // offset 0x1108, size 0x18, align 8 | MNotSaved
    AttachmentHandle_t m_leftFootAttachment; // offset 0x1120, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_rightFootAttachment; // offset 0x1121, size 0x1, align 255 | MNotSaved
    char _pad_1122[0x2]; // offset 0x1122
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // offset 0x1124, size 0x4, align 4 | MNotSaved
    float32 m_flWaterWorldZ; // offset 0x1128, size 0x4, align 4 | MNotSaved
    float32 m_flWaterNextTraceTime; // offset 0x112C, size 0x4, align 4 | MNotSaved
    char _pad_1130[0x60]; // offset 0x1130
};
