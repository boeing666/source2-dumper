#pragma once

struct TrooperVsConfig_t  // sizeof 0x14, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 m_flBaseDPS; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    float32 m_flEndDPS; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    float32 m_flEndDPSTimeInSeconds; // offset 0x8, size 0x4, align 4 | MPropertyDescription
    float32 m_flMaxRange; // offset 0xC, size 0x4, align 4 | MPropertyDescription
    float32 m_flDamageResist; // offset 0x10, size 0x4, align 4 | MPropertyDescription
};
