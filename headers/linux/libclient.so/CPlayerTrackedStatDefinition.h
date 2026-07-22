#pragma once

class CPlayerTrackedStatDefinition  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    TrackedStatID_t m_unStatID; // offset 0x8, size 0x4, align 255 | MPropertyDescription MVDataUniqueMonotonicInt MPropertyAttributeEditor
    EPlayerTrackedStatImpl m_eStatImpl; // offset 0xC, size 0x4, align 4 | MPropertyDescription
    TrackedStatKillEaterData_t m_killEaterData; // offset 0x10, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    char _pad_0014[0x4]; // offset 0x14
    TrackedStatCombatQueryData_t m_combatQueryData; // offset 0x18, size 0x8, align 8 | MPropertyDescription MPropertySuppressExpr
    TrackedStatExpressionData_t m_expressionData; // offset 0x20, size 0x10, align 8 | MPropertyDescription MPropertySuppressExpr
    TrackedStatHeroAdjectiveData_t m_heroAdjectiveData; // offset 0x30, size 0x8, align 8 | MPropertyDescription MPropertySuppressExpr
};
