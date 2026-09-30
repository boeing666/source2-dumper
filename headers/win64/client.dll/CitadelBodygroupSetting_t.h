#pragma once

struct CitadelBodygroupSetting_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlStringToken m_sBodyGroupName; // offset 0x0, size 0x4, align 4 | MPropertyAttributeEditor MPropertyProvidesEditContextString
    char _pad_0004[0x4]; // offset 0x4
    CBodyGroupChoiceSymbolWithStorage m_BodygroupChoice; // offset 0x8, size 0x20, align 8 | MPropertyAttributeEditor MPropertyDescription
    int32 m_nPriority; // offset 0x28, size 0x4, align 4 | MPropertyDescription
    char _pad_002C[0x4]; // offset 0x2C
};
