#pragma once

class CModifierVData_BaseAura : public CCitadelModifierVData /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    AuraShapeType_t m_nAuraShapeType; // offset 0x750, size 0x4, align 4
    AuraCenterType_t m_nCenterType; // offset 0x754, size 0x4, align 4
    CModifierLevelFloat m_flAuraRadius; // offset 0x758, size 0x10, align 255 | MPropertySuppressExpr
    CModifierLevelFloat m_flAuraEntityBoundsScale; // offset 0x768, size 0x10, align 255 | MPropertySuppressExpr
    int32 m_nAmbientParticleRadiusControlPoint; // offset 0x778, size 0x4, align 4
    char _pad_077C[0x4]; // offset 0x77C
    CEmbeddedSubclass< CBaseModifier > m_modifierProvidedByAura; // offset 0x780, size 0x10, align 8 | MPropertyDescription MPropertyFriendlyName
};
