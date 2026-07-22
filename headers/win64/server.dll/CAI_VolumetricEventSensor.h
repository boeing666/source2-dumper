#pragma once

class CAI_VolumetricEventSensor : public CPointEntity /*0x0*/  // sizeof 0x558, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    bool m_bDisabled; // offset 0x4B0, size 0x1, align 1
    char _pad_04B1[0x7]; // offset 0x4B1
    AI_VolumetricEventTypeMask_t m_nEventTypeMask; // offset 0x4B8, size 0x8, align 8
    float32 m_flSensitivity; // offset 0x4C0, size 0x4, align 4
    float32 m_flMaxRange; // offset 0x4C4, size 0x4, align 4
    CUtlSymbolLarge m_iszListenFilter; // offset 0x4C8, size 0x8, align 8
    CHandle< CBaseFilter > m_hListenFilter; // offset 0x4D0, size 0x4, align 4
    char _pad_04D4[0x4]; // offset 0x4D4
    CUtlVector< AI_VolumetricEventHandle_t > m_hSensedEvents; // offset 0x4D8, size 0x18, align 8
    CEntityOutputTemplate< CAI_VolumetricEventSensor::OnStartedArgs_t > m_OnEventStarted; // offset 0x4F0, size 0x30, align 8
    CEntityOutputTemplate< AI_VolumetricEventHandle_t > m_OnEventEnded; // offset 0x520, size 0x20, align 8
    CEntityIOOutput m_OnAllEventsEnded; // offset 0x540, size 0x18, align 255
};
