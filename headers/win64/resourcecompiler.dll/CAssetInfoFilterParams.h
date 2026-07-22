#pragma once

class CAssetInfoFilterParams  // sizeof 0x18, align 0x8 (toolutils2) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< InfoDataFilter_t > m_Filters; // offset 0x0, size 0x18, align 8
};
