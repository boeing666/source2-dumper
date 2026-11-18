#pragma once

struct Blessing_t  // sizeof 0x40, align 0x8 (client) {MGetKV3ClassDefaults MVDataOutlinerIconExpr}
{
    BlessingID_t nID; // offset 0x0, size 0x4, align 255 | MVDataUniqueMonotonicInt MPropertyAttributeEditor
    char _pad_0004[0x4]; // offset 0x4
    CUtlString BlessingType; // offset 0x8, size 0x8, align 8 | MPropertyAttributeEditor
    char _pad_0010[0x4]; // offset 0x10
    int32 nCost; // offset 0x14, size 0x4, align 4 | MPropertyDescription
    int32 nValue; // offset 0x18, size 0x4, align 4 | MPropertyDescription
    float32 flValue; // offset 0x1C, size 0x4, align 4 | MPropertyDescription
    bool bStartNode; // offset 0x20, size 0x1, align 1 | MPropertyDescription
    char _pad_0021[0xB]; // offset 0x21
    Vector2D vecPos; // offset 0x2C, size 0x8, align 4
    float32 flSize; // offset 0x34, size 0x4, align 4 | MPropertyAttributeRange
    Color color; // offset 0x38, size 0x4, align 4 | MPropertyDescription
    char _pad_003C[0x4]; // offset 0x3C
};
