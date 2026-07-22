#pragma once

class CAnimGraphDoc_GraphMotionItem : public CAnimGraphDoc_MotionItem /*0x0*/  // sizeof 0x100, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0xA8]; // offset 0x0
    CUtlString m_name; // offset 0xA8, size 0x8, align 8 | MPropertyFriendlyName
    CAnimGraphDoc_MotionNodeManager m_nodeManager; // offset 0xB0, size 0x50, align 8 | MPropertySuppressField
};
