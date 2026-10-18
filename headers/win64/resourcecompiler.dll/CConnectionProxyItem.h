#pragma once

class CConnectionProxyItem  // sizeof 0x18, align 0x8 (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyElementNameFn}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName
    AnimNodeOutputID m_outputID; // offset 0x8, size 0x4, align 4 | MPropertySuppressField
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0xC, size 0x8, align 4 | MPropertySuppressField
    char _pad_0014[0x4]; // offset 0x14
};
