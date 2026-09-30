#pragma once

class C_BaseCombatCharacter : public CBaseAnimGraph /*0x0*/  // sizeof 0xE28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // offset 0xDA0, size 0x18, align 8 | MNotSaved
    AttachmentHandle_t m_leftFootAttachment; // offset 0xDB8, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_rightFootAttachment; // offset 0xDB9, size 0x1, align 255 | MNotSaved
    char _pad_0DBA[0x2]; // offset 0xDBA
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // offset 0xDBC, size 0x4, align 4 | MNotSaved
    float32 m_flWaterWorldZ; // offset 0xDC0, size 0x4, align 4 | MNotSaved
    float32 m_flWaterNextTraceTime; // offset 0xDC4, size 0x4, align 4 | MNotSaved
    char _pad_0DC8[0x60]; // offset 0xDC8
};
