#pragma once

class CAnimGraphDoc_ProxyNodeBase : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x60, align 0xFF [vtable abstract] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CUtlVector< CConnectionProxyItem > m_proxyItems; // offset 0x48, size 0x18, align 8 | MPropertyFriendlyName MPropertyAutoExpandSelf
};
