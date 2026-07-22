#pragma once

class CNmGraphDocNode  // sizeof 0x50, align 0xFF [vtable abstract] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    V_uuid_t m_ID; // offset 0x8, size 0x10, align 4 | MPropertySuppressField
    CUtlString m_name; // offset 0x18, size 0x8, align 8 | MPropertyHideField
    CUtlString m_floatingComment; // offset 0x20, size 0x8, align 8 | MPropertyAttributeEditor
    Vector2D m_position; // offset 0x28, size 0x8, align 4 | MPropertySuppressField
    char _pad_0030[0x10]; // offset 0x30
    CNmGraphDocGraph* m_pChildGraph; // offset 0x40, size 0x8, align 8 | MPropertySuppressField
    CNmGraphDocGraph* m_pSecondaryGraph; // offset 0x48, size 0x8, align 8 | MPropertySuppressField
};
