#pragma once

class C_BaseCombatCharacter : public CBaseAnimGraph /*0x0*/  // sizeof 0xE80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // offset 0xDF8, size 0x18, align 8 | MNotSaved
    AttachmentHandle_t m_leftFootAttachment; // offset 0xE10, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_rightFootAttachment; // offset 0xE11, size 0x1, align 255 | MNotSaved
    char _pad_0E12[0x2]; // offset 0xE12
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // offset 0xE14, size 0x4, align 4 | MNotSaved
    float32 m_flWaterWorldZ; // offset 0xE18, size 0x4, align 4 | MNotSaved
    float32 m_flWaterNextTraceTime; // offset 0xE1C, size 0x4, align 4 | MNotSaved
    char _pad_0E20[0x60]; // offset 0xE20
};
