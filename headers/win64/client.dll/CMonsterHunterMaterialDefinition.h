#pragma once

class CMonsterHunterMaterialDefinition  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    MonsterHunterMaterialID_t m_unID; // offset 0x0, size 0x1, align 255 | MVDataUniqueMonotonicInt MPropertyAttributeEditor
    char _pad_0001[0x7]; // offset 0x1
    CUtlString m_strName; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    EMonsterHunterMaterialRarity m_eRarity; // offset 0x10, size 0x4, align 4 | MPropertyDescription
    bool m_bUniversal; // offset 0x14, size 0x1, align 1
    bool m_bHidden; // offset 0x15, size 0x1, align 1
    bool m_bDeprecated; // offset 0x16, size 0x1, align 1
    char _pad_0017[0x1]; // offset 0x17
};
