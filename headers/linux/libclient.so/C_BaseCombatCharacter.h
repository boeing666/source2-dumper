#pragma once

class C_BaseCombatCharacter : public CBaseAnimGraph /*0x0*/  // sizeof 0x1278, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11F0]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // offset 0x11F0, size 0x18, align 8 | MNotSaved
    AttachmentHandle_t m_leftFootAttachment; // offset 0x1208, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_rightFootAttachment; // offset 0x1209, size 0x1, align 255 | MNotSaved
    char _pad_120A[0x2]; // offset 0x120A
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // offset 0x120C, size 0x4, align 4 | MNotSaved
    float32 m_flWaterWorldZ; // offset 0x1210, size 0x4, align 4 | MNotSaved
    float32 m_flWaterNextTraceTime; // offset 0x1214, size 0x4, align 4 | MNotSaved
    char _pad_1218[0x60]; // offset 0x1218
};
