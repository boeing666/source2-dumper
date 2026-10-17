#pragma once

class CTriggerProximity : public CBaseTrigger /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9D0]; // offset 0x0
    CHandle< CBaseEntity > m_hMeasureTarget; // offset 0x9D0, size 0x4, align 4
    char _pad_09D4[0x4]; // offset 0x9D4
    CUtlSymbolLarge m_iszMeasureTarget; // offset 0x9D8, size 0x8, align 8
    float32 m_fRadius; // offset 0x9E0, size 0x4, align 4
    int32 m_nTouchers; // offset 0x9E4, size 0x4, align 4
    CEntityOutputTemplate< float32 > m_NearestEntityDistance; // offset 0x9E8, size 0x20, align 8
};
