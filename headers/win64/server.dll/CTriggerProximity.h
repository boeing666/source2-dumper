#pragma once

class CTriggerProximity : public CBaseTrigger /*0x0*/  // sizeof 0xA68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    CHandle< CBaseEntity > m_hMeasureTarget; // offset 0xA30, size 0x4, align 4
    char _pad_0A34[0x4]; // offset 0xA34
    CUtlSymbolLarge m_iszMeasureTarget; // offset 0xA38, size 0x8, align 8
    float32 m_fRadius; // offset 0xA40, size 0x4, align 4
    int32 m_nTouchers; // offset 0xA44, size 0x4, align 4
    CEntityOutputTemplate< float32 > m_NearestEntityDistance; // offset 0xA48, size 0x20, align 8
};
