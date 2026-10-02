#pragma once

class CCitadel_Modifier_ScalingPowerUpVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CUtlVector< ScalingPowerupDefinition_t > m_vecModifierValues; // offset 0x790, size 0x18, align 8
    EPowerupValueScaling m_eValueScaling; // offset 0x7A8, size 0x4, align 4 | MPropertyDescription
    float32 m_flTimeMin; // offset 0x7AC, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flTimeMax; // offset 0x7B0, size 0x4, align 4 | MPropertySuppressExpr
    char _pad_07B4[0x4]; // offset 0x7B4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // offset 0x7B8, size 0xE0, align 8 | MPropertyStartGroup
    Color m_Color; // offset 0x898, size 0x4, align 4
    char _pad_089C[0x4]; // offset 0x89C
};
