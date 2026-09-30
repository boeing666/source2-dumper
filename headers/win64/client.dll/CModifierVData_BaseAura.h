#pragma once

class CModifierVData_BaseAura : public CCitadelModifierVData /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    AuraShapeType_t m_nAuraShapeType; // offset 0x760, size 0x4, align 4
    AuraCenterType_t m_nCenterType; // offset 0x764, size 0x4, align 4
    CModifierLevelFloat m_flAuraRadius; // offset 0x768, size 0x10, align 255 | MPropertySuppressExpr
    CModifierLevelFloat m_flAuraEntityBoundsScale; // offset 0x778, size 0x10, align 255 | MPropertySuppressExpr
    int32 m_nAmbientParticleRadiusControlPoint; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x4]; // offset 0x78C
    CEmbeddedSubclass< CBaseModifier > m_modifierProvidedByAura; // offset 0x790, size 0x10, align 8 | MPropertyDescription MPropertyFriendlyName
};
