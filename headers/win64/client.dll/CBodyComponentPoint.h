#pragma once

class CBodyComponentPoint : public CBodyComponent /*0x0*/  // sizeof 0x1C0, align 0xFF [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    CGameSceneNode m_sceneNode; // offset 0x80, size 0x140, align 255 | MNetworkEnable
};
