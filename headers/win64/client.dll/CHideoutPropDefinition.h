#pragma once

class CHideoutPropDefinition  // sizeof 0x1F0, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    EHideoutPropType_t m_nPropType; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ModelName; // offset 0x8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCTextureBase > > m_TextureName; // offset 0xE8, size 0xE0, align 8
    CPanoramaImageName m_ImageName; // offset 0x1C8, size 0x10, align 8
    CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecPropModifiers; // offset 0x1D8, size 0x18, align 8
};
