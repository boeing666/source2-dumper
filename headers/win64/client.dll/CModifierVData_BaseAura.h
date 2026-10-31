#pragma once

class CModifierVData_BaseAura : public CCitadelModifierVData /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    AuraShapeType_t m_nAuraShapeType; // offset 0x798, size 0x4, align 4
    AuraCenterType_t m_nCenterType; // offset 0x79C, size 0x4, align 4
    CModifierLevelFloat m_flAuraRadius; // offset 0x7A0, size 0x10, align 255 | MPropertySuppressExpr
    CModifierLevelFloat m_flAuraEntityBoundsScale; // offset 0x7B0, size 0x10, align 255 | MPropertySuppressExpr
    int32 m_nAmbientParticleRadiusControlPoint; // offset 0x7C0, size 0x4, align 4
    char _pad_07C4[0x4]; // offset 0x7C4
    CEmbeddedSubclass< CBaseModifier > m_modifierProvidedByAura; // offset 0x7C8, size 0x10, align 8 | MPropertyDescription MPropertyFriendlyName
};
