#pragma once

enum EAbilityMoveExecuteType_t : uint8_t  // sizeof 0x1
{
    EMoveExecute_TryPlayerMove = 0,
    EMoveExecute_FullWalkMove = 1,
    EMoveExecute_NoclipMove = 2,
    EMoveExecute_FlyMove = 3,
};
