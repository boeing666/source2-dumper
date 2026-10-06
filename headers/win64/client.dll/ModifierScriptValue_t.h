#pragma once

struct ModifierScriptValue_t  // sizeof 0x1E0, align 0x8 (client) {MGetKV3ClassDefaults}
{
    EModifierValue m_eModifierValue; // offset 0x0, size 0x2, align 2
    char _pad_0002[0x2]; // offset 0x2
    ModifierScriptVariantType_t m_eType; // offset 0x4, size 0x4, align 4
    CModifierLevelFloat m_value; // offset 0x8, size 0x10, align 255 | MPropertySuppressExpr
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelValue; // offset 0x18, size 0xE0, align 8 | MPropertySuppressExpr
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticleValue; // offset 0xF8, size 0xE0, align 8 | MPropertySuppressExpr
    CUtlString m_sStringValue; // offset 0x1D8, size 0x8, align 8 | MPropertySuppressExpr
};
