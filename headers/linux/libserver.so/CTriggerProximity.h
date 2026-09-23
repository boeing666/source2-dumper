#pragma once

class CTriggerProximity : public CBaseTrigger /*0x0*/  // sizeof 0xCD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC9C]; // offset 0x0
    CHandle< CBaseEntity > m_hMeasureTarget; // offset 0xC9C, size 0x4, align 4
    CUtlSymbolLarge m_iszMeasureTarget; // offset 0xCA0, size 0x8, align 8
    float32 m_fRadius; // offset 0xCA8, size 0x4, align 4
    int32 m_nTouchers; // offset 0xCAC, size 0x4, align 4
    CEntityOutputTemplate< float32 > m_NearestEntityDistance; // offset 0xCB0, size 0x20, align 8
};
