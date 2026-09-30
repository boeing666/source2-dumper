#pragma once

struct MapDistrictDesc_t  // sizeof 0x10, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strDistrict; // offset 0x0, size 0x8, align 8
    CUtlString m_strBuilding; // offset 0x8, size 0x8, align 8
};
