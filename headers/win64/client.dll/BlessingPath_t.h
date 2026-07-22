#pragma once

struct BlessingPath_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults MVDataOutlinerIconExpr MVDataAnonymousNode}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlString Node1; // offset 0x8, size 0x8, align 8 | MPropertyAttributeEditor
    char _pad_0010[0x8]; // offset 0x10
    CUtlString Node2; // offset 0x18, size 0x8, align 8 | MPropertyAttributeEditor
    char _pad_0020[0x4]; // offset 0x20
    bool bOneWay; // offset 0x24, size 0x1, align 1 | MPropertyDescription
    char _pad_0025[0x3]; // offset 0x25
    float32 flCircleInvRadius; // offset 0x28, size 0x4, align 4 | MPropertyAttributeRange MPropertyDescription
    Color color; // offset 0x2C, size 0x4, align 1 | MPropertyDescription
};
