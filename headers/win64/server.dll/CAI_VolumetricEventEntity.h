#pragma once

class CAI_VolumetricEventEntity : public CPointEntity /*0x0*/  // sizeof 0x4C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    AI_VolumetricEventType_t m_iEventType; // offset 0x4A0, size 0x1, align 1
    char _pad_04A1[0x1]; // offset 0x4A1
    AI_VolumetricEventFlags_t m_iEventFlags; // offset 0x4A2, size 0x2, align 2
    float32 m_flRadius; // offset 0x4A4, size 0x4, align 4
    AI_VolumetricEventHandle_t m_hEvent; // offset 0x4A8, size 0x8, align 255
    float32 m_flDuration; // offset 0x4B0, size 0x4, align 4
    char _pad_04B4[0x4]; // offset 0x4B4
    CUtlSymbolLarge m_iszProxyEntityName; // offset 0x4B8, size 0x8, align 8
};
