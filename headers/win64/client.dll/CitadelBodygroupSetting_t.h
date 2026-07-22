#pragma once

struct CitadelBodygroupSetting_t  // sizeof 0xC, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    CUtlStringToken m_sBodyGroupName; // offset 0x0, size 0x4, align 4 | MPropertyAttributeEditor
    int32 m_nBodygroupChoice; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    int32 m_nPriority; // offset 0x8, size 0x4, align 4
};
