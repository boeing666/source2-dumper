#pragma once

class CAnimGraphDoc_Blend2DItem  // sizeof 0x30, align 0xFF [vtable abstract] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    Vector2D m_blendValue; // offset 0x18, size 0x8, align 4 | MPropertyFriendlyName
    char _pad_0020[0x8]; // offset 0x20
    bool m_bUseCustomDuration; // offset 0x28, size 0x1, align 1 | MPropertyGroupName MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_0029[0x3]; // offset 0x29
    float32 m_flCustomDuration; // offset 0x2C, size 0x4, align 4 | MPropertyGroupName MPropertyFriendlyName MPropertyAttrStateCallback
};
