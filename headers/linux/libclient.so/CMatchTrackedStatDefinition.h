#pragma once

class CMatchTrackedStatDefinition  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    TrackedStatID_t m_unStatID; // offset 0x8, size 0x4, align 255 | MPropertyDescription MVDataUniqueMonotonicInt MPropertyAttributeEditor
    EMatchTrackedStatImpl m_eStatImpl; // offset 0xC, size 0x4, align 4 | MPropertyDescription
    TrackedStatExpressionData_t m_expressionData; // offset 0x10, size 0x10, align 8 | MPropertyDescription MPropertySuppressExpr
    TrackedStatAggregateData_t m_aggregateData; // offset 0x20, size 0x10, align 8 | MPropertyDescription MPropertySuppressExpr
};
