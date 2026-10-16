#pragma once

enum EChessPieceState : uint32_t  // sizeof 0x4
{
    kChessPiece_State_Idle = 0,
    kChessPiece_State_PickedUp = 1,
    kChessPiece_State_Moving = 2,
};
