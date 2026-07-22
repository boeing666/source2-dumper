#pragma once

enum EJetpackMode_t : uint8_t  // sizeof 0x1
{
    EJetpackMode_None = 0,
    EJetpackMode_Default = 1,
    EJetpackMode_Hover = 2,
    EJetpackMode_WallAttach = 3,
    EJetpackMode_VTOL = 4,
};
