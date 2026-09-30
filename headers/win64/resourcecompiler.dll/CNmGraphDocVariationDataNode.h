#pragma once

class CNmGraphDocVariationDataNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x208, align 0xFF [vtable abstract] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    CNmGraphDocVariationDataNode::CData* m_pDefaultVariationData; // offset 0x108, size 0x8, align 8 | MPropertySuppressField
    CUtlVector< CNmGraphDocVariationDataNode::OverrideValue_t > m_overrides; // offset 0x110, size 0x18, align 8 | MPropertySuppressField
    CResourceName m_defaultResourceName; // offset 0x128, size 0xE0, align 8 | MPropertySuppressField
};
