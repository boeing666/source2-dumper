#pragma once

class CCitadel_Modifier_ScalingPowerUpVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CUtlVector< ScalingPowerupDefinition_t > m_vecModifierValues; // offset 0x760, size 0x18, align 8
    EPowerupValueScaling m_eValueScaling; // offset 0x778, size 0x4, align 4 | MPropertyDescription
    float32 m_flTimeMin; // offset 0x77C, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flTimeMax; // offset 0x780, size 0x4, align 4 | MPropertySuppressExpr
    char _pad_0784[0x4]; // offset 0x784
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // offset 0x788, size 0xE0, align 8 | MPropertyStartGroup
    Color m_Color; // offset 0x868, size 0x4, align 4
    char _pad_086C[0x4]; // offset 0x86C
};
