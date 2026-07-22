#pragma once

struct MaterialGroup_t  // sizeof 0x20, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_materials; // offset 0x8, size 0x18, align 8
};
