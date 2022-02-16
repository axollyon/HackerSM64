#ifndef OBJECT_CONSTANTS_H
#define OBJECT_CONSTANTS_H

// This file contains macros that provide descriptive names for
// field-specific and object-specific constants, e.g. actions.

/* activeFlags */
enum ObjActiveFlags {
    ACTIVE_FLAG_DEACTIVATED                    = 0x0,
    ACTIVE_FLAG_ACTIVE                         = BIT( 0), // 0x0001
    ACTIVE_FLAG_FAR_AWAY                       = BIT( 1), // 0x0002
    ACTIVE_FLAG_UNUSED                         = BIT( 2), // 0x0004
    ACTIVE_FLAG_IN_DIFFERENT_ROOM              = BIT( 3), // 0x0008
    ACTIVE_FLAG_UNIMPORTANT                    = BIT( 4), // 0x0010
    ACTIVE_FLAG_INITIATED_TIME_STOP            = BIT( 5), // 0x0020
    ACTIVE_FLAG_MOVE_THROUGH_GRATE             = BIT( 6), // 0x0040
    ACTIVE_FLAG_DITHERED_ALPHA                 = BIT( 7), // 0x0080
    ACTIVE_FLAG_ALLOCATED                      = BIT( 8), // 0x0100
    ACTIVE_FLAG_DESTRUCTIVE_OBJ_DONT_DESTROY   = BIT( 9), // 0x0200
    ACTIVE_FLAG_IGNORE_ENV_BOXES               = BIT(10), // 0x0400
};

/* respawnInfoType */
enum RespawnInfoType {
    RESPAWN_INFO_TYPE_NULL,
    RESPAWN_INFO_TYPE_NORMAL,
    RESPAWN_INFO_TYPE_MACRO_OBJECT,
};

/* respawnInfo */
#define RESPAWN_INFO_DONT_RESPAWN                   0xFF

/* oFlags */
enum ObjFlags {
    OBJ_FLAGS_NONE                             = 0x0,
    OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE          = BIT( 0), // 0x00000001
    OBJ_FLAG_MOVE_XZ_USING_FVEL                = BIT( 1), // 0x00000002
    OBJ_FLAG_MOVE_Y_WITH_TERMINAL_VEL          = BIT( 2), // 0x00000004
    OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW          = BIT( 3), // 0x00000008
    OBJ_FLAG_SET_FACE_ANGLE_TO_MOVE_ANGLE      = BIT( 4), // 0x00000010
    OBJ_FLAG_UPDATE_TRANSFORM_FOR_THROW_MATRIX = BIT( 5), // 0x00000020
    OBJ_FLAG_COMPUTE_DIST_TO_MARIO             = BIT( 6), // 0x00000040
    OBJ_FLAG_ACTIVE_FROM_AFAR                  = BIT( 7), // 0x00000080
    OBJ_FLAG_PLAYER                            = BIT( 8), // 0x00000100
    OBJ_FLAG_TRANSFORM_RELATIVE_TO_PARENT      = BIT( 9), // 0x00000200
    OBJ_FLAG_HOLDABLE                          = BIT(10), // 0x00000400
    OBJ_FLAG_SET_THROW_MATRIX_FROM_TRANSFORM   = BIT(11), // 0x00000800
    OBJ_FLAG_UNUSED_12                         = BIT(12), // 0x00001000
    OBJ_FLAG_COMPUTE_ANGLE_TO_MARIO            = BIT(13), // 0x00002000
    OBJ_FLAG_PERSISTENT_RESPAWN                = BIT(14), // 0x00004000
    OBJ_FLAG_VELOCITY_PLATFORM                 = BIT(15), // 0x00008000
    OBJ_FLAG_DONT_CALC_COLL_DIST               = BIT(16), // 0x00010000
    OBJ_FLAG_UCODE_SMALL                       = BIT(17), // 0x00020000
    OBJ_FLAG_UCODE_LARGE                       = BIT(18), // 0x00040000
    OBJ_FLAG_SILHOUETTE                        = BIT(19), // 0x00080000
    OBJ_FLAG_OCCLUDE_SILHOUETTE                = BIT(20), // 0x00100000
    OBJ_FLAG_OPACITY_FROM_CAMERA_DIST          = BIT(21), // 0x00200000
    OBJ_FLAG_EMIT_LIGHT                        = BIT(22), // 0x00400000
    OBJ_FLAG_UNUSED_23                         = BIT(23), // 0x00800000
    OBJ_FLAG_UNUSED_24                         = BIT(24), // 0x01000000
    OBJ_FLAG_UNUSED_25                         = BIT(25), // 0x02000000
    OBJ_FLAG_UNUSED_26                         = BIT(26), // 0x04000000
    OBJ_FLAG_UNUSED_27                         = BIT(27), // 0x08000000
    OBJ_FLAG_UNUSED_28                         = BIT(28), // 0x10000000
    OBJ_FLAG_UNUSED_29                         = BIT(29), // 0x20000000
    OBJ_FLAG_HITBOX_WAS_SET                    = BIT(30), // 0x40000000
    OBJ_FLAG_UNUSED_31                         = BIT(31), // 0x80000000
};

/* oHeldState */
enum HeldState {
    HELD_FREE,
    HELD_HELD,
    HELD_THROWN,
    HELD_DROPPED,
};

/* oDialogState */
enum DialogState {
    DIALOG_STATUS_ENABLE_TIME_STOP,
    DIALOG_STATUS_INTERRUPT,
    DIALOG_STATUS_START_DIALOG,
    DIALOG_STATUS_STOP_DIALOG,
    DIALOG_STATUS_DISABLE_TIME_STOP,
};

enum DialogFlags {
    DIALOG_FLAG_NONE                           = 0x0,
    DIALOG_FLAG_TURN_TO_MARIO                  = BIT( 0), // 0x01 // cutscene only
    DIALOG_FLAG_TEXT_DEFAULT                   = BIT( 1), // 0x02
    DIALOG_FLAG_TEXT_RESPONSE                  = BIT( 2), // 0x04 // non-cutscene only
    DIALOG_FLAG_UNK_CAPSWITCH                  = BIT( 3), // 0x08 // not defined
    DIALOG_FLAG_TIME_STOP_ENABLED              = BIT( 4), // 0x10
};

/* oMoveFlags */
enum ObjMoveFlags {
    OBJ_MOVE_NONE                              = 0x0,
    OBJ_MOVE_LANDED                            = BIT( 0), // 0x0001
    OBJ_MOVE_ON_GROUND                         = BIT( 1), // 0x0002 // mutually exclusive to OBJ_MOVE_LANDED
    OBJ_MOVE_LEFT_GROUND                       = BIT( 2), // 0x0004
    OBJ_MOVE_ENTERED_WATER                     = BIT( 3), // 0x0008
    OBJ_MOVE_AT_WATER_SURFACE                  = BIT( 4), // 0x0010
    OBJ_MOVE_UNDERWATER_OFF_GROUND             = BIT( 5), // 0x0020
    OBJ_MOVE_UNDERWATER_ON_GROUND              = BIT( 6), // 0x0040
    OBJ_MOVE_IN_AIR                            = BIT( 7), // 0x0080
    OBJ_MOVE_OUT_SCOPE                         = BIT( 8), // 0x0100
    OBJ_MOVE_HIT_WALL                          = BIT( 9), // 0x0200
    OBJ_MOVE_HIT_EDGE                          = BIT(10), // 0x0400
    OBJ_MOVE_ABOVE_LAVA                        = BIT(11), // 0x0800
    OBJ_MOVE_LEAVING_WATER                     = BIT(12), // 0x1000
    OBJ_MOVE_BOUNCE                            = BIT(13), // 0x2000
    OBJ_MOVE_ABOVE_DEATH_BARRIER               = BIT(14), // 0x4000
    OBJ_MOVE_UNUSED                            = BIT(15), // 0x8000
};

#define OBJ_MOVE_MASK_ON_GROUND (OBJ_MOVE_LANDED | OBJ_MOVE_ON_GROUND)
#define OBJ_MOVE_MASK_IN_WATER (\
    OBJ_MOVE_ENTERED_WATER |\
    OBJ_MOVE_AT_WATER_SURFACE |\
    OBJ_MOVE_UNDERWATER_OFF_GROUND |\
    OBJ_MOVE_UNDERWATER_ON_GROUND)

/* oActiveParticleFlags */
enum ActiveParticleFlags {
    ACTIVE_PARTICLE_NONE                       = 0x0,
    ACTIVE_PARTICLE_DUST                       = BIT( 0), // 0x00000001
    ACTIVE_PARTICLE_UNUSED_1                   = BIT( 1), // 0x00000002
    ACTIVE_PARTICLE_UNUSED_2                   = BIT( 2), // 0x00000004
    ACTIVE_PARTICLE_SPARKLES                   = BIT( 3), // 0x00000008
    ACTIVE_PARTICLE_H_STAR                     = BIT( 4), // 0x00000010
    ACTIVE_PARTICLE_BUBBLE                     = BIT( 5), // 0x00000020
    ACTIVE_PARTICLE_WATER_SPLASH               = BIT( 6), // 0x00000040
    ACTIVE_PARTICLE_IDLE_WATER_WAVE            = BIT( 7), // 0x00000080
    ACTIVE_PARTICLE_SHALLOW_WATER_WAVE         = BIT( 8), // 0x00000100
    ACTIVE_PARTICLE_PLUNGE_BUBBLE              = BIT( 9), // 0x00000200
    ACTIVE_PARTICLE_WAVE_TRAIL                 = BIT(10), // 0x00000400
    ACTIVE_PARTICLE_FIRE                       = BIT(11), // 0x00000800
    ACTIVE_PARTICLE_SHALLOW_WATER_SPLASH       = BIT(12), // 0x00001000
    ACTIVE_PARTICLE_LEAF                       = BIT(13), // 0x00002000
    ACTIVE_PARTICLE_DIRT                       = BIT(14), // 0x00004000
    ACTIVE_PARTICLE_MIST_CIRCLE                = BIT(15), // 0x00008000
    ACTIVE_PARTICLE_SNOW                       = BIT(16), // 0x00010000
    ACTIVE_PARTICLE_BREATH                     = BIT(17), // 0x00020000
    ACTIVE_PARTICLE_V_STAR                     = BIT(18), // 0x00040000
    ACTIVE_PARTICLE_TRIANGLE                   = BIT(19), // 0x00080000
};

/* oBehParams */

/**
 * behParams: oBehParams
 * index: index of bparam in oBehParams
 * val: bparam value
 * num: number of bparams to read as one value
 */
// Number of bparams in oBehParams
#define NUM_BPARAMS 4
// Number of bits in one bparam
#define BPARAM_SIZE 8
// Number of bits in bparam bitmask
#define BPARAM_MASK_SIZE(num) (BPARAM_SIZE * (num))
// bparam bitmask ('num' 1 -> 0xFF, 'num' 2 -> 0xFFFF, etc.)
#define BPARAM_MASK(num) BITMASK(BPARAM_MASK_SIZE(num))
// Returns the amount of bits to shift a bparam value ('index' == bparam index)
#define BPARAM_NSHIFT(index, num) (((NUM_BPARAMS - ((num) - 1)) - (index)) * BPARAM_SIZE)
// Returns the bparam(s) value shifted to the index location in oBehParams
#define SHIFTED_BPARAM(val, index, num) (((val) & BPARAM_MASK(num)) << BPARAM_NSHIFT((index), (num)))
// Returns the bparam(s) value from the index location in oBehParams
#define GET_BPARAMS(behParams, index, num) ((behParams >> BPARAM_NSHIFT((index), (num))) & BPARAM_MASK(num))
// bparam mask shifted to the index location in oBehParams
#define BPARAM_SHIFTED_MASK(index, num) (BPARAM_MASK(num) << BPARAM_NSHIFT((index), (num)))
// oBehParams with the specified bparam(s) cleared
#define CLEARED_BPARAM(behParams, index, num) ((behParams) & ~BPARAM_SHIFTED_MASK((index), (num)))

// Get a u8 bparam from oBehParams
#define GET_BPARAM1(behParams) GET_BPARAMS((behParams), 1, 1)
#define GET_BPARAM2(behParams) GET_BPARAMS((behParams), 2, 1)
#define GET_BPARAM3(behParams) GET_BPARAMS((behParams), 3, 1)
#define GET_BPARAM4(behParams) GET_BPARAMS((behParams), 4, 1)

// Read 2 bparams as a single value
#define GET_BPARAM12(behParams) GET_BPARAMS((behParams), 1, 2)
#define GET_BPARAM23(behParams) GET_BPARAMS((behParams), 2, 2)
#define GET_BPARAM34(behParams) GET_BPARAMS((behParams), 3, 2)

// Read 3 bparams as a single value
#define GET_BPARAM123(behParams) GET_BPARAMS((behParams), 1, 3)
#define GET_BPARAM234(behParams) GET_BPARAMS((behParams), 2, 3)

// Set a bparam in oBehParams without overwriting other bparams
#define SET_BPARAM(behParams, val, index, num) (behParams) = (CLEARED_BPARAM((behParams), (index), (num)) | SHIFTED_BPARAM((val), (index), (num)))
#define SET_BPARAM1(behParams, val) SET_BPARAM((behParams), (val), 1, 1)
#define SET_BPARAM2(behParams, val) SET_BPARAM((behParams), (val), 2, 1)
#define SET_BPARAM3(behParams, val) SET_BPARAM((behParams), (val), 3, 1)
#define SET_BPARAM4(behParams, val) SET_BPARAM((behParams), (val), 4, 1)

// Set a bparam in oBehParams, clearing other bparams
#define SET_FULL_BPARAM(behParams, val, index, num) (behParams) = SHIFTED_BPARAM((val), (index), (num))
#define SET_FULL_BPARAM1(behParams, val) SET_FULL_BPARAM((behParams), (val), 1, 1)
#define SET_FULL_BPARAM2(behParams, val) SET_FULL_BPARAM((behParams), (val), 2, 1)
#define SET_FULL_BPARAM3(behParams, val) SET_FULL_BPARAM((behParams), (val), 3, 1)
#define SET_FULL_BPARAM4(behParams, val) SET_FULL_BPARAM((behParams), (val), 4, 1)

// OR a bparam into an index in oBehParams
#define OR_BPARAM(behParams, val, index, num) (behParams) |= SHIFTED_BPARAM((val), (index), (num))
#define OR_BPARAM1(behParams, val) OR_BPARAM((behParams), (val), 1, 1)
#define OR_BPARAM2(behParams, val) OR_BPARAM((behParams), (val), 2, 1)
#define OR_BPARAM3(behParams, val) OR_BPARAM((behParams), (val), 3, 1)
#define OR_BPARAM4(behParams, val) OR_BPARAM((behParams), (val), 4, 1)

// NAND a bparam into an index in oBehParams
#define NAND_BPARAM(behParams, val, index, num) (behParams) &= ~SHIFTED_BPARAM((val), (index), (num))
#define NAND_BPARAM1(behParams, val) NAND_BPARAM((behParams), (val), 1, 1)
#define NAND_BPARAM2(behParams, val) NAND_BPARAM((behParams), (val), 2, 1)
#define NAND_BPARAM3(behParams, val) NAND_BPARAM((behParams), (val), 3, 1)
#define NAND_BPARAM4(behParams, val) NAND_BPARAM((behParams), (val), 4, 1)

// Current object bparams
#define BPARAM1 GET_BPARAM1(o->oBehParams)
#define BPARAM2 GET_BPARAM2(o->oBehParams)
#define BPARAM3 GET_BPARAM3(o->oBehParams)
#define BPARAM4 GET_BPARAM4(o->oBehParams)



/* oBehParams2ndByte */
enum ObjGeneralBehParams {
    OBJ_BP_NONE,
};

/* oAction */
enum ObjGeneralProjectileActions {
    OBJ_ACT_PROJECTILE_HIT_MARIO = -1,
};

/* oAction */
enum ObjGeneralDeathActions {
    OBJ_ACT_LAVA_DEATH = 100,
    OBJ_ACT_DEATH_PLANE_DEATH,
};

enum ObjGeneralKnockbackActions {
    OBJ_ACT_HORIZONTAL_KNOCKBACK = 100,
    OBJ_ACT_VERTICAL_KNOCKBACK,
    OBJ_ACT_SQUISHED,
};

/* oAnimState */
enum ObjGeneralAnimStates {
    OBJ_ANIM_STATE_INIT_ANIM = -1,
    OBJ_ANIM_STATE_DEFAULT   =  0,
};

/* cur_obj_update_blinking */
enum AnimStateBlinking {
    OBJ_BLINKING_ANIM_STATE_EYES_OPEN,
    OBJ_BLINKING_ANIM_STATE_EYES_CLOSED,
};

/* geo_update_layer_transparency */
enum AnimStateLayerTransparency {
    TRANSPARENCY_ANIM_STATE_OPAQUE,
    TRANSPARENCY_ANIM_STATE_TRANSPARENT,
};

/* Animations */
enum ObjGeneralAnimations {
    OBJ_ANIM_NONE = -1,
};

/* gTTCSpeedSetting */
enum TTCSpeedSetting {
    TTC_SPEED_SLOW,
    TTC_SPEED_FAST,
    TTC_SPEED_RANDOM,
    TTC_SPEED_STOPPED,
};

/* Orange Number */
enum OrangeNumbers { // oBehParams2ndByte, oAnimState
    ORANGE_NUMBER_0,
    ORANGE_NUMBER_1,
    ORANGE_NUMBER_2,
    ORANGE_NUMBER_3,
    ORANGE_NUMBER_4,
    ORANGE_NUMBER_5,
    ORANGE_NUMBER_6,
    ORANGE_NUMBER_7,
    ORANGE_NUMBER_8,
    ORANGE_NUMBER_9,
    ORANGE_NUMBER_A,
    ORANGE_NUMBER_B,
    ORANGE_NUMBER_C,
    ORANGE_NUMBER_D,
    ORANGE_NUMBER_E,
    ORANGE_NUMBER_F,
};

/* Coin Type */
enum CoinTypes { // coinType
    COIN_TYPE_NONE,
    COIN_TYPE_YELLOW,
    COIN_TYPE_BLUE,
};

/* Bouncing Coin */
enum oActionsBouncingCoin {
    BOUNCING_COIN_ACT_FALLING,
    BOUNCING_COIN_ACT_BOUNCING,
};

/* Hidden Blue Coin */
enum oActionsHiddenBlueCoin {
    HIDDEN_BLUE_COIN_ACT_INACTIVE,
    HIDDEN_BLUE_COIN_ACT_WAITING,
    HIDDEN_BLUE_COIN_ACT_ACTIVE,
};

/* Blue Coin Switch */
enum oActionsBlueCoinSwitch {
    BLUE_COIN_SWITCH_ACT_IDLE,
    BLUE_COIN_SWITCH_ACT_RECEDING,
    BLUE_COIN_SWITCH_ACT_TICKING,
    BLUE_COIN_SWITCH_ACT_EXTENDING,
};

/* Moving Blue Coin */
enum oActionsMovingBlueCoin {
    MOV_BCOIN_ACT_STILL,
    MOV_BCOIN_ACT_MOVING,
    MOV_BCOIN_ACT_SLOWING_DOWN,
    MOV_BCOIN_ACT_STOPPED,
    MOV_BCOIN_ACT_FLICKERING,
};

/* Yellow Coin */
enum oBehParams2ndByteYellowCoin {
    YELLOW_COIN_BP_NO_COINS,
    YELLOW_COIN_BP_ONE_COIN,
};

/* Moving Yellow Coin */
enum oActionsMovingYellowCoin {
    MOV_YCOIN_ACT_IDLE,
    MOV_YCOIN_ACT_BLINKING,
};

/* Coin Formation */
enum CoinFormationFlags {
    COIN_FORMATION_FLAG_NONE     = 0x0,
    COIN_FORMATION_FLAG_VERTICAL = BIT(0),
    COIN_FORMATION_FLAG_RING     = BIT(1),
    COIN_FORMATION_FLAG_ARROW    = BIT(2),
    COIN_FORMATION_FLAG_FLYING   = BIT(4),
};
enum oBehParams2ndByteCoinFormation {
    COIN_FORMATION_BP_SHAPE_HORIZONTAL_LINE = (COIN_FORMATION_FLAG_NONE),
    COIN_FORMATION_BP_SHAPE_VERTICAL_LINE   = (COIN_FORMATION_FLAG_VERTICAL),
    COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING = (COIN_FORMATION_FLAG_RING),
    COIN_FORMATION_BP_SHAPE_VERTICAL_RING   = (COIN_FORMATION_FLAG_RING | COIN_FORMATION_FLAG_VERTICAL),
    COIN_FORMATION_BP_SHAPE_ARROW           = (COIN_FORMATION_FLAG_ARROW),
    COIN_FORMATION_BP_SHAPE_MASK = 0x07,
    COIN_FORMATION_BP_FLYING     = 0x10,
};
enum oActionsCoinFormation {
    COIN_FORMATION_ACT_INACTIVE,
    COIN_FORMATION_ACT_ACTIVE,
    COIN_FORMATION_ACT_DEACTIVATE,
};

/* Coin Inside Boo */
enum oBehParam1stByteCoinInsideBoo {
    COIN_INSIDE_BOO_BP_BLUE_COIN,
    COIN_INSIDE_BOO_BP_YELLOW_COIN,
};
enum oActionsCoinInsideBoo {
    COIN_INSIDE_BOO_ACT_CARRIED,
    COIN_INSIDE_BOO_ACT_DROPPED,
};

/* 1-Up Mushroom */
enum oBehParams2ndByte1UpMushroom {
    MUSHROOM_BP_REQUIRES_NONE,
    MUSHROOM_BP_REQUIRES_BOWSER_1,
    MUSHROOM_BP_REQUIRES_BOWSER_2,
};
enum oActions1UpMushroom {
    MUSHROOM_ACT_INIT,
    MUSHROOM_ACT_MOVING,
    MUSHROOM_ACT_DISAPPEARING,
    MUSHROOM_ACT_LOOP_IN_AIR,
};

/* Bob-omb */
enum oBehParams2ndByteBobOmb {
    BOBOMB_BP_STYPE_GENERIC,
    BOBOMB_BP_STYPE_STATIONARY,
};
enum oActionsBobOmb {
    BOBOMB_ACT_PATROL,
    BOBOMB_ACT_LAUNCHED,
    BOBOMB_ACT_CHASE_MARIO,
    BOBOMB_ACT_EXPLODE,
};
enum animIDsBobOmb {
    BOBOMB_ANIM_WALKING,
    BOBOMB_ANIM_HELD,
};

/* Bob-omb Buddy */
enum oBehParams2ndByteBobOmbBuddy {
    BOBOMB_BUDDY_BP_STYPE_GENERIC,
    BOBOMB_BUDDY_BP_STYPE_BOB_GRASS_KBB,
    BOBOMB_BUDDY_BP_STYPE_BOB_CANNON_KBB,
    BOBOMB_BUDDY_BP_STYPE_BOB_GRASS,
};
enum oActionsBobOmbBuddy {
    BOBOMB_BUDDY_ACT_IDLE,
    BOBOMB_BUDDY_ACT_1,
    BOBOMB_BUDDY_ACT_TURN_TO_TALK,
    BOBOMB_BUDDY_ACT_TALK,
};
enum oBobombBuddyRoles {
    BOBOMB_BUDDY_ROLE_ADVICE,
    BOBOMB_BUDDY_ROLE_CANNON
};
enum oBobombBuddyCannonStatuses {
    BOBOMB_BUDDY_CANNON_UNOPENED,
    BOBOMB_BUDDY_CANNON_OPENING,
    BOBOMB_BUDDY_CANNON_OPENED,
    BOBOMB_BUDDY_CANNON_STOP_TALKING,
};
enum oBobombBuddyHasTalkedToMarioStates {
    BOBOMB_BUDDY_HAS_NOT_TALKED,
    BOBOMB_BUDDY_TALKED_STATE_UNUSED,
    BOBOMB_BUDDY_HAS_TALKED,
};

/* Bowser */
enum oBehParams2ndByteBowser {
    BOWSER_BP_BITDW,
    BOWSER_BP_BITFS,
    BOWSER_BP_BITS,
};
enum oActionsBowserTail {
    BOWSER_ACT_TAIL_DEFAULT,
    BOWSER_ACT_TAIL_THROWN,
    BOWSER_ACT_TAIL_TOUCHED_MARIO,
};
enum oActionsBowser {
    BOWSER_ACT_DEFAULT,
    BOWSER_ACT_THROWN,
    BOWSER_ACT_JUMP_ONTO_STAGE,
    BOWSER_ACT_DANCE,
    BOWSER_ACT_DEAD,
    BOWSER_ACT_WAIT,
    BOWSER_ACT_INTRO_WALK,
    BOWSER_ACT_CHARGE_MARIO,
    BOWSER_ACT_SPIT_FIRE_INTO_SKY,
    BOWSER_ACT_SPIT_FIRE_ONTO_FLOOR,
    BOWSER_ACT_HIT_EDGE,
    BOWSER_ACT_TURN_FROM_EDGE,
    BOWSER_ACT_HIT_MINE,
    BOWSER_ACT_BIG_JUMP,
    BOWSER_ACT_WALK_TO_MARIO,
    BOWSER_ACT_BREATH_FIRE,
    BOWSER_ACT_TELEPORT,
    BOWSER_ACT_QUICK_JUMP,
    BOWSER_ACT_UNUSED_SLOW_WALK,
    BOWSER_ACT_TILT_LAVA_PLATFORM,
};
enum oAnimStatesBowser {
    BOWSER_ANIM_STATE_OPAQUE      = TRANSPARENCY_ANIM_STATE_OPAQUE,
    BOWSER_ANIM_STATE_TRANSPARENT = TRANSPARENCY_ANIM_STATE_TRANSPARENT,
    BOWSER_ANIM_STATE_INVISIBLE   = 2,
};
enum animIDsBowser {
    BOWSER_ANIM_STAND_UP,
    BOWSER_ANIM_STAND_UP_UNUSED, // slightly different
    BOWSER_ANIM_SHAKING,
    BOWSER_ANIM_GRABBED,
    BOWSER_ANIM_BROKEN,          // broken animation
    BOWSER_ANIM_FALL_DOWN,       // unused
    BOWSER_ANIM_BREATH,
    BOWSER_ANIM_JUMP,            // unused, short jump, replaced by start/stop
    BOWSER_ANIM_JUMP_STOP,
    BOWSER_ANIM_JUMP_START,
    BOWSER_ANIM_DANCE,
    BOWSER_ANIM_BREATH_UP,
    BOWSER_ANIM_IDLE,
    BOWSER_ANIM_SLOW_GAIT,
    BOWSER_ANIM_LOOK_DOWN_STOP_WALK,
    BOWSER_ANIM_LOOK_UP_START_WALK,
    BOWSER_ANIM_FLIP_DOWN,
    BOWSER_ANIM_LAY_DOWN,
    BOWSER_ANIM_RUN_START,
    BOWSER_ANIM_RUN,
    BOWSER_ANIM_RUN_STOP,
    BOWSER_ANIM_RUN_SLIP,
    BOWSER_ANIM_BREATH_QUICK,
    BOWSER_ANIM_EDGE_MOVE,
    BOWSER_ANIM_EDGE_STOP,
    BOWSER_ANIM_FLIP,
    BOWSER_ANIM_STAND_UP_FROM_FLIP,
};
enum oBowserCamActions {
    BOWSER_CAM_ACT_IDLE,
    BOWSER_CAM_ACT_WALK,
    BOWSER_CAM_ACT_END,
};
enum oBowserStatuses {
    BOWSER_STATUS_ANGLE_MARIO  = BIT( 1), // 0x00000002
    BOWSER_STATUS_ANGLE_CENTER = BIT( 2), // 0x00000004
    BOWSER_STATUS_DIST_MARIO   = BIT( 3), // 0x00000008
    BOWSER_STATUS_DIST_CENTER  = BIT( 4), // 0x00000010
    BOWSER_STATUS_BIG_JUMP     = BIT(16), // 0x00010000
    BOWSER_STATUS_FIRE_SKY     = BIT(17), // 0x00020000
    BOWSER_STATUS_MASK         = 0xFF,
};
enum oBowserGrabbedStatuses {
    BOWSER_GRAB_STATUS_NONE,
    BOWSER_GRAB_STATUS_GRABBED,
    BOWSER_GRAB_STATUS_HOLDING,
};
    /* oSubAction */
enum oSubActionsBowserActThrown { // BOWSER_ACT_THROWN
    BOWSER_SUB_ACT_THROWN_BOUNCE,
    BOWSER_SUB_ACT_THROWN_STOP,
};
enum oSubActionsBowserActDead { // BOWSER_ACT_DEAD
    BOWSER_SUB_ACT_DEAD_FLY_BACK,
    BOWSER_SUB_ACT_DEAD_BOUNCE,
    BOWSER_SUB_ACT_DEAD_WAIT,
    BOWSER_SUB_ACT_DEAD_DEFAULT_END,
    BOWSER_SUB_ACT_DEAD_DEFAULT_END_OVER,
    BOWSER_SUB_ACT_DEAD_FINAL_END = 0xA,
    BOWSER_SUB_ACT_DEAD_FINAL_END_OVER,
};
enum oSubActionsBowserActIntroWalk { // BOWSER_ACT_INTRO_WALK
    BOWSER_SUB_ACT_INTRO_WALK_LOOK_UP,
    BOWSER_SUB_ACT_INTRO_WALK_SLOWLY,
    BOWSER_SUB_ACT_INTRO_WALK_STOP,
};
enum oSubActionsBowserActChargeMario { // BOWSER_ACT_CHARGE_MARIO
    BOWSER_SUB_ACT_CHARGE_START,
    BOWSER_SUB_ACT_CHARGE_RUN,
    BOWSER_SUB_ACT_CHARGE_END,
    BOWSER_SUB_ACT_CHARGE_SLIP,
};
enum oSubActionsBowserActTeleport { // BOWSER_ACT_TELEPORT
    BOWSER_SUB_ACT_TELEPORT_START,
    BOWSER_SUB_ACT_TELEPORT_MOVE,
    BOWSER_SUB_ACT_TELEPORT_STOP,
};
enum oSubActionsBowserActSpitFireOntoFloor { // BOWSER_ACT_SPIT_FIRE_ONTO_FLOOR
    BOWSER_SUB_ACT_SPIT_FIRE_FLOOR_START,
    BOWSER_SUB_ACT_SPIT_FIRE_FLOOR_STOP,
};
enum oSubActionsBowserActHitEdge { // BOWSER_ACT_HIT_EDGE
    BOWSER_SUB_ACT_HIT_EDGE_START,
    BOWSER_SUB_ACT_HIT_EDGE_STOP,
};
enum oSubActionsBowserActTurnFromEdge { // BOWSER_ACT_TURN_FROM_EDGE
    BOWSER_SUB_ACT_TURN_FROM_EDGE_START,
    BOWSER_SUB_ACT_TURN_FROM_EDGE_STOP,
    BOWSER_SUB_ACT_TURN_FROM_EDGE_END,
};
enum oSubActionsBowserActHitMine { // BOWSER_ACT_HIT_MINE
    BOWSER_SUB_ACT_HIT_MINE_START,
    BOWSER_SUB_ACT_HIT_MINE_FALL,
    BOWSER_SUB_ACT_HIT_MINE_STOP,
};
enum oSubActionsBowserActJumpOntoStage { // BOWSER_ACT_JUMP_ONTO_STAGE
    BOWSER_SUB_ACT_JUMP_ON_STAGE_IDLE,
    BOWSER_SUB_ACT_JUMP_ON_STAGE_START,
    BOWSER_SUB_ACT_JUMP_ON_STAGE_LAND,
    BOWSER_SUB_ACT_JUMP_ON_STAGE_STOP,
};
enum oSubActionsBowserActBigJump { // BOWSER_ACT_BIG_JUMP
    BOWSER_SUB_ACT_BIG_JUMP_START,
    BOWSER_SUB_ACT_BIG_JUMP_LAND,
    BOWSER_SUB_ACT_BIG_JUMP_STOP,
};
enum oSubActionsBowserActWalkToMario { // BOWSER_ACT_WALK_TO_MARIO
    BOWSER_SUB_ACT_WALK_TO_MARIO_START,
    BOWSER_SUB_ACT_WALK_TO_MARIO_WALKING,
    BOWSER_SUB_ACT_WALK_TO_MARIO_STOP,
};
enum oSubActionsBowserActQuickJump { // BOWSER_ACT_QUICK_JUMP
    BOWSER_SUB_ACT_QUICK_JUMP_START,
    BOWSER_SUB_ACT_QUICK_JUMP_LAND,
    BOWSER_SUB_ACT_QUICK_JUMP_STOP,
};

/* Bowser BITS Platform */
enum oActionsBowserBITSPlatform {
    BOWSER_BITS_PLAT_ACT_START,
    BOWSER_BITS_PLAT_ACT_CHECK,
    BOWSER_BITS_PLAT_ACT_FALL,
};
    /* oSubAction */
enum oSubActionsBowserBITSPlatformActCheck { // BOWSER_BITS_PLAT_ACT_CHECK
    BOWSER_BITS_PLAT_SUB_ACT_CHECK_RESET_TIMER,
    BOWSER_BITS_PLAT_SUB_ACT_CHECK_DEBUG_FALL,
};

/* Bowser Flame */
enum oActionsBowserFlame {
    BOWSER_FLAME_ACT_FLOATING,
    BOWSER_FLAME_ACT_LANDED,
};

/* Blue Bowser Flame */
enum oBehParams2ndByteBlueBowserFlame {
    BOWSER_FLAME_BLUE_BP_SPAWN_RED_FLAMES,
    BOWSER_FLAME_BLUE_BP_SPAWN_BLUE_FLAMES,
};

/* Bowser Floating Flame */
enum oBehParams2ndByteBowserFloatingFlame {
    BOWSER_FLOATING_FLAME_SPAWN_RED_FLAME,
    BOWSER_FLOATING_FLAME_SPAWN_BLUE_FLAME_1,
    BOWSER_FLOATING_FLAME_SPAWN_BLUE_FLAME_2,
};

/* Bowser Key */
enum oActionsBowserKey {
    BOWSER_KEY_ACT_BOUNCING,
    BOWSER_KEY_ACT_LANDED,
};

/* Bowser Key Cutscene */
enum animIDsBowserKeyCutscene {
    BOWSER_KEY_CUTSCENE_ANIM_UNLOCK_DOOR,
    BOWSER_KEY_CUTSCENE_ANIM_COURSE_EXIT,
};

/* Fish Spawer */
enum oBehParams2ndByteFishSpawner {
    FISH_SPAWNER_BP_MANY_BLUE,
    FISH_SPAWNER_BP_FEW_BLUE,
    FISH_SPAWNER_BP_MANY_CYAN,
    FISH_SPAWNER_BP_FEW_CYAN,
};
enum oActionsFishSpawner {
    FISH_SPAWNER_ACT_SPAWN,
    FISH_SPAWNER_ACT_IDLE,
    FISH_SPAWNER_ACT_RESPAWN,
};

/* Fish */
enum oActionsFish {
    FISH_ACT_INIT,
    FISH_ACT_ROAM,
    FISH_ACT_FLEE,
};
enum animIDsFish {
    FISH_ANIM_DEFAULT,
};

/* Blue Fish Spawner */
enum oActionsBlueFishSpawner { // bhv_blue_fish_spawn_loop
    BLUE_FISH_ACT_SPAWN,
    BLUE_FISH_ACT_ROOM,
    BLUE_FISH_ACT_DUPLICATE,
};

/* Blue Fish */
enum oActionsBlueFish {
    BLUE_FISH_ACT_DIVE,
    BLUE_FISH_ACT_TURN,
    BLUE_FISH_ACT_ASCEND,
    BLUE_FISH_ACT_TURN_BACK,
};
enum animIDsBlueFish {
    BLUE_FISH_ANIM_DEFAULT,
};

/* Cheep Cheep Spawner */
enum oActionsBubSpawner {
    BUB_SPAWNER_ACT_SPAWN_BUBS,
    BUB_SPAWNER_ACT_IDLE,
    BUB_SPAWNER_ACT_REMOVE_BUBS,
    BUB_SPAWNER_ACT_RESET,
};

/* Cheep Cheep */
enum oActionsBub {
    BUB_ACT_INIT,
    BUB_ACT_SWIMMING_TOWARDS_MARIO,
    BUB_ACT_SWIMMING_AWAY_FROM_MARIO,
};
enum animIDsBub {
    BUB_ANIM_SWIM,
};

/* Bubba */
enum oActionsBubba {
    BUBBA_ACT_IDLE,
    BUBBA_ACT_ATTACK,
};
enum oAnimStatesBubba {
    BUBBA_ANIM_STATE_CLOSED_MOUTH,
    BUBBA_ANIM_STATE_OPEN_MOUTH,
};

/* Seaweed */
enum animIDsSeaweed {
    SEAWEED_ANIM_WAVE,
};

/* Clam */
enum oActionsClam {
    CLAM_ACT_CLOSING,
    CLAM_ACT_OPENING,
};
enum animIDsClam {
    CLAM_ANIM_CLOSING,
    CLAM_ANIM_OPENING,
};

/* Purple Switch */
enum oBehParams2ndBytePurpleSwitch {
    PURPLE_SWITCH_BP_NO_TICK,
    PURPLE_SWITCH_BP_ANIMATES,
    PURPLE_SWITCH_BP_REVEAL_HIDDEN,
};
enum oActionsPurpleSwitch {
    PURPLE_SWITCH_ACT_IDLE,
    PURPLE_SWITCH_ACT_PRESSED,
    PURPLE_SWITCH_ACT_TICKING,
    PURPLE_SWITCH_ACT_UNPRESSED,
    PURPLE_SWITCH_ACT_WAIT_FOR_MARIO_TO_GET_OFF,
};

/* Animates on Floor Switch */
enum oBehParams2ndByteAnimatesOnFloorSwitch {
    ANIMATES_ON_FLOOR_SWITCH_BP_BITS_STAIRS,
    ANIMATES_ON_FLOOR_SWITCH_BP_BITDW_STAIRS,
    ANIMATES_ON_FLOOR_SWITCH_BP_RR_TRIGANGLES,
};

/* Openable Grill */
enum oBehParams2ndByteOpenableGrill {
    OPENABLE_GRILL_BP_BOB,
    OPENABLE_GRILL_BP_HMC,
};
enum oActionsOpenableGrill {
    OEPNABLE_GRILL_ACT_SPAWN,
    OEPNABLE_GRILL_IDLE_CLOSED,
    OEPNABLE_GRILL_OPENING,
    OEPNABLE_GRILL_IDLE_OPEN,
};

/* Openable Grill Door */
enum oBehParams2ndByteOpenableGrillDoor {
    OPENABLE_GRILL_DOOR_BP_SIDE_FLIPPED   = -1,
    OPENABLE_GRILL_DOOR_BP_SIDE_UNFLIPPED =  1,
};
enum oActionsOpenableGrillDoor {
    OPENABLE_GRILL_DOOR_ACT_CLOSED,
    OPENABLE_GRILL_DOOR_ACT_OPENING,
    OPENABLE_GRILL_DOOR_ACT_OPEN,
};

/* Breakable Box */
enum oBehParams2ndByteBreakableBox {
    BREAKABLE_BOX_BP_NO_COINS,
    BREAKABLE_BOX_BP_3_COINS,
    BREAKABLE_BOX_BP_5_COINS,
    BREAKABLE_BOX_BP_LARGE,
};
enum oActionsBreakableBox {
    BREAKABLE_BOX_ACT_HIDDEN,
    BREAKABLE_BOX_ACT_ACTIVE,
    BREAKABLE_BOX_ACT_BROKEN,
};
enum oAnimStatesBreakableBox {
    BREAKABLE_BOX_ANIM_STATE_CRAZY_BOX,
    BREAKABLE_BOX_ANIM_STATE_CORK_BOX,
};

/* Small Breakable Box */
enum oActionsSmallBreakableBox {
    BREAKABLE_BOX_SMALL_ACT_MOVE,
};

/* Jumping Box */
enum oActionsJumpingBox {
    JUMPING_BOX_ACT_IDLE,
    JUMPING_BOX_ACT_DROPPED,
};
    /* oSubAction */
enum oSubActionsJumpingBoxActIdle { // JUMPING_BOX_ACT_IDLE
    JUMPING_BOX_SUB_ACT_IDLE_BOUNCING,
    JUMPING_BOX_SUB_ACT_IDLE_RESET_TIMER,
};

/* Exclamation Box */
enum ExclamationBoxContentsList { // oBehParams2ndByte, ExclamationBoxContents->id
    EXCLAMATION_BOX_BP_WING_CAP,
    EXCLAMATION_BOX_BP_METAL_CAP,
    EXCLAMATION_BOX_BP_VANISH_CAP,
    EXCLAMATION_BOX_BP_KOOPA_SHELL,
    EXCLAMATION_BOX_BP_COINS_1,
    EXCLAMATION_BOX_BP_COINS_3,
    EXCLAMATION_BOX_BP_COINS_10,
    EXCLAMATION_BOX_BP_1UP_WALKING,
    EXCLAMATION_BOX_BP_STAR_1,
    EXCLAMATION_BOX_BP_1UP_RUNNING_AWAY,
    EXCLAMATION_BOX_BP_STAR_2,
    EXCLAMATION_BOX_BP_STAR_3,
    EXCLAMATION_BOX_BP_STAR_4,
    EXCLAMATION_BOX_BP_STAR_5,
    EXCLAMATION_BOX_BP_STAR_6,
    EXCLAMATION_BOX_BP_NULL = 99
};
enum oBehParam1stByteExclamationBox {
    EXCLAMATION_BOX_BP1_NEEDS_SWITCH,
    EXCLAMATION_BOX_BP1_ALWAYS_ACTIVE,
};
enum oActionsExclamationBox {
    EXCLAMATION_BOX_ACT_INIT,
    EXCLAMATION_BOX_ACT_OUTLINE,
    EXCLAMATION_BOX_ACT_ACTIVE,
    EXCLAMATION_BOX_ACT_SCALING,
    EXCLAMATION_BOX_ACT_EXPLODE,
    EXCLAMATION_BOX_ACT_WAIT_FOR_RESPAWN
};
enum oAnimStatesExcalamationBox {
    EXCLAMATION_BOX_ANIM_STATE_RED,
    EXCLAMATION_BOX_ANIM_STATE_GREEN,
    EXCLAMATION_BOX_ANIM_STATE_BLUE,
    EXCLAMATION_BOX_ANIM_STATE_YELLOW
};

/* Cap Switch */
enum oBehParams2ndByteCapSwitch {
    CAP_SWITCH_BP_WING_CAP,
    CAP_SWITCH_BP_METAL_CAP,
    CAP_SWITCH_BP_VANISH_CAP,
    CAP_SWITCH_BP_YELLOW_CAP,
};
enum oActionsCapSwitch {
    CAP_SWITCH_ACT_INIT,
    CAP_SWITCH_ACT_IDLE_UNPRESSED,
    CAP_SWITCH_ACT_BEING_PRESSED,
    CAP_SWITCH_ACT_IDLE_PRESSED
};

/* Mario Cap */
enum oActionsMarioCap {
    CAP_ACT_MOVE,
    CAP_ACT_QUICKSAND = 0xA,
    CAP_ACT_MOVING_QUICKSAND,
    CAP_ACT_INSTANT_QUICKSAND,
    CAP_ACT_INSTANT_MOVING_QUICKSAND,
};

/* Koopa Shell */
enum oActionsKoopaShell {
    KOOPA_SHELL_ACT_MARIO_NOT_RIDING,
    KOOPA_SHELL_ACT_MARIO_RIDING,
};

/* Koopa Shell Underwater */
enum oActionsKoopaShellUnderwater {
    KOOPA_SHELL_UNDERWATER_ACT_DEFAULT,
};

/* Cannon Trap Door */
enum oActionsCannonTrapDoor {
    CANNON_TRAP_DOOR_ACT_CLOSED,
    CANNON_TRAP_DOOR_ACT_CAM_ZOOM,
    CANNON_TRAP_DOOR_ACT_OPENING,
    CANNON_TRAP_DOOR_ACT_OPEN,
};

/* Opened Cannon */
enum oActionsOpenedCannon {
    OPENED_CANNON_ACT_IDLE,
    OPENED_CANNON_ACT_READY,
    OPENED_CANNON_ACT_SHOOT,
    OPENED_CANNON_ACT_RESETTING,
    OPENED_CANNON_ACT_RISING,
    OPENED_CANNON_ACT_RAISE_BARREL,
    OPENED_CANNON_ACT_TURNING_YAW,
};

/* Door */
enum oBehParams1stByteKeyDoor {
    KEY_DOOR_BP1_BASEMENT,
    KEY_DOOR_BP1_UPSTAIRS,
};
enum oActionsDoor {
    DOOR_ACT_CLOSED,
    DOOR_ACT_PULLED,
    DOOR_ACT_PUSHED,
    DOOR_ACT_WARP_PULLED,
    DOOR_ACT_WARP_PUSHED,
};
enum animIDsDoor {
    DOOR_ANIM_CLOSED,
    DOOR_ANIM_PULLED,
    DOOR_ANIM_PUSHED,
    DOOR_ANIM_WARP_PULLED,
    DOOR_ANIM_WARP_PUSHED,
};

/* Star Door */
enum oActionsStarDoor {
    STAR_DOOR_ACT_CLOSED,
    STAR_DOOR_ACT_OPENING,
    STAR_DOOR_ACT_OPEN,
    STAR_DOOR_ACT_CLOSING,
    STAR_DOOR_ACT_RESET,
};

/* Castle Trap Door */
enum oActionsCastleTrapDoor {
    CASTLE_FLOOR_TRAP_ACT_OPEN_DETECT,
    CASTLE_FLOOR_TRAP_ACT_OPEN,
    CASTLE_FLOOR_TRAP_ACT_CLOSE_DETECT,
    CASTLE_FLOOR_TRAP_ACT_CLOSE,
    CASTLE_FLOOR_TRAP_ACT_ROTATE,
};

/* Castle Flag */
enum animIDsCastleFlag {
    CASTLE_FLAG_ANIM_WAVE,
};

/* Homing Amp */
enum oActionsHomingAmp {
    HOMING_AMP_ACT_INACTIVE,
    HOMING_AMP_ACT_APPEAR,
    HOMING_AMP_ACT_CHASE,
    HOMING_AMP_ACT_GIVE_UP,
    HOMING_AMP_ACT_ATTACK_COOLDOWN,
};

/* Amp */
enum oBehParams2ndByteAmp {
    AMP_BP_ROT_RADIUS_200,
    AMP_BP_ROT_RADIUS_300,
    AMP_BP_ROT_RADIUS_400,
    AMP_BP_ROT_RADIUS_0,
};
enum oActionsAmp {
    AMP_ACT_IDLE            = 2,
    AMP_ACT_ATTACK_COOLDOWN = 4,
};
enum oAnimStatesAmp {
    AMP_ANIM_STATE_OFF,
    AMP_ANIM_STATE_ON,
};
enum animIDsAmp {
    AMP_ANIM_DEFAULT,
};

/* Butterfly */
enum oActionsButterfly {
    BUTTERFLY_ACT_RESTING,
    BUTTERFLY_ACT_FOLLOW_MARIO,
    BUTTERFLY_ACT_RETURN_HOME,
};
enum animIDsButterfly {
    BUTTERFLY_ANIM_FLYING,
    BUTTERFLY_ANIM_RESTING,
};

/* Hoot */
enum oActionsHoot {
    HOOT_ACT_ASCENT,
    HOOT_ACT_CARRY,
    HOOT_ACT_TIRED,
};
enum oHootAvailabilityStates {
    HOOT_AVAIL_ASLEEP_IN_TREE,
    HOOT_AVAIL_WANTS_TO_TALK,
    HOOT_AVAIL_READY_TO_FLY,
};
enum animIDsHoot {
    HOOT_ANIM_DEFAULT,
    HOOT_ANIM_HOLDING_MARIO,
};

/* Bully (all variants) */
enum oBehParams2ndByteBully {
    BULLY_BP_SIZE_SMALL,
    BULLY_BP_SIZE_BIG,
};
enum oActionsBully {
    BULLY_ACT_PATROL,
    BULLY_ACT_CHASE_MARIO,
    BULLY_ACT_KNOCKBACK,
    BULLY_ACT_BACK_UP,
    BULLY_ACT_INACTIVE,
    BULLY_ACT_ACTIVATE_AND_FALL,
};
enum oBullySubtypes {
    BULLY_STYPE_GENERIC = 0x00,
    BULLY_STYPE_MINION  = 0x01,
    BULLY_STYPE_CHILL   = 0x10,
};
enum animIDsBully {
    BULLY_ANIM_WALKING,
    BULLY_ANIM_RUNNING,
    BULLY_ANIM_UNUSED,
    BULLY_ANIM_BOAST,
};

/* Water Ring (all variants) */
enum oActionsWaterRing {
    WATER_RING_ACT_NOT_COLLECTED,
    WATER_RING_ACT_COLLECTED,
};
enum animIDsWaterRing {
    WATER_RING_ANIM_WOBBLE,
};

/* Jet Stream Water Ring Spawner */
enum oActionsJetStreamWaterRingSpawner {
    JS_RING_SPAWNER_ACT_ACTIVE,
    JS_RING_SPAWNER_ACT_INACTIVE,
};

/* Star General */
enum oBehParam1stByteStarAct { // BPARAM1
    STAR_BP_ACT_1,
    STAR_BP_ACT_2,
    STAR_BP_ACT_3,
    STAR_BP_ACT_4,
    STAR_BP_ACT_5,
    STAR_BP_ACT_6,
    STAR_BP_ACT_100_COINS,
};

/* Hidden Star */
enum oActionsHiddenStar {
    HIDDEN_STAR_ACT_INACTIVE,
    HIDDEN_STAR_ACT_ACTIVE,
};

/* Spawn Star stay at position cutscene */
enum oBehParams2ndByteSpawnStarPos {
    SPAWN_STAR_POS_CUTSCENE_BP_SPAWN_AT_MARIO,
    SPAWN_STAR_POS_CUTSCENE_BP_SPAWN_AT_HOME,
};
enum oActionsSpawnStarPos {
    SPAWN_STAR_POS_CUTSCENE_ACT_START,
    SPAWN_STAR_POS_CUTSCENE_ACT_BOUNCE,
    SPAWN_STAR_POS_CUTSCENE_ACT_END,
    SPAWN_STAR_POS_CUTSCENE_ACT_SLOW_STAR_ROTATION,
};

/* Spawn Star arc to position cutscene */
enum oBehParams2ndByteSpawnStarArc {
    SPAWN_STAR_ARC_CUTSCENE_BP_DEFAULT_STAR,
    SPAWN_STAR_ARC_CUTSCENE_BP_HIDDEN_STAR,
};
enum oActionsSpawnStarArc {
    SPAWN_STAR_ARC_CUTSCENE_ACT_START,
    SPAWN_STAR_ARC_CUTSCENE_ACT_GO_TO_HOME,
    SPAWN_STAR_ARC_CUTSCENE_ACT_BOUNCE,
    SPAWN_STAR_ARC_CUTSCENE_ACT_END,
};

/* Celebration Star */
enum oActionsCelebrationStar {
    CELEB_STAR_ACT_SPIN_AROUND_MARIO,
    CELEB_STAR_ACT_FACE_CAMERA,
};

/* Grand Star */
enum oActionsGrandStar {
    GRAND_STAR_ACT_APPEAR,
    GRAND_STAR_ACT_JUMP,
    GRAND_STAR_ACT_WAIT_FOR_INTERACTION,
};
    /* oSubAction */
enum oSubActionsGrandStarActJump { // GRAND_STAR_ACT_JUMP
    GRAND_STAR_SUB_ACT_START_JUMP,
    GRAND_STAR_SUB_ACT_CONTINUE_JUMP,
};

/* LLL Drawbridge */
enum oActionsLLLDrawbridge {
    LLL_DRAWBRIDGE_ACT_LOWER,
    LLL_DRAWBRIDGE_ACT_RAISE,
};

/* LLL Volcano Trap */
enum oActionsLLLVolcanoTrap {
    LLL_VOLCANO_TRAP_ACT_WAIT,
    LLL_VOLCANO_TRAP_ACT_FALL,
    LLL_VOLCANO_TRAP_ACT_LAND,
    LLL_VOLCANO_TRAP_ACT_RISE,
};

/* LLL Floating Wood Bridge */
enum oActionsLLLFloatingWoodBridge {
    LLL_FLOATING_WOOD_ACT_INACTIVE,
    LLL_FLOATING_WOOD_ACT_ACTIVE,
    LLL_FLOATING_WOOD_ACT_REMOVE_PIECES,
};

/* LLL Hexagonal Ring */
enum oActionsLLLHexagonalRing {
    LLL_HEXAGONAL_RING_ACT_MARIO_OFF_PLATFORM,
    LLL_HEXAGONAL_RING_ACT_MARIO_ON_PLATFORM,
    LLL_HEXAGONAL_RING_ACT_SPAWN_FLAMES,
    LLL_HEXAGONAL_RING_ACT_MARIO_LEFT_PLATFORM,
    LLL_HEXAGONAL_RING_ACT_RESET,
};

/* LLL Octagonal Rotating Mesh */
enum oActionsLLLOctagonalRotatingMesh {
    LLL_OCTAGONAL_ROTATING_MESH_ACT_RESET,
    LLL_OCTAGONAL_ROTATING_MESH_ACT_MOVE,
};

/* LLL Fire Bar */
enum oBehParams2ndByteLLLFireBar {
    LLL_FIRE_BAR_BP_DEFAULT = 4,
};
enum oActionsLLLFireBar {
    LLL_FIRE_BAR_ACT_INACTIVE,
    LLL_FIRE_BAR_ACT_SPAWN_FLAMES,
    LLL_FIRE_BAR_ACT_ACTIVE,
    LLL_FIRE_BAR_ACT_REMOVE_FLAMES,
};

/* BITFS Sinking Cage Platform with pole */
enum oBehParams2ndByteBITFSSinkingPolePlatform {
    SINKING_POLE_PLATFORM_BP_LOW,
    SINKING_POLE_PLATFORM_BP_HIGH,
};

/* Tumbling Bridge Platform */
enum oActionsTumblingBridgePlatform {
    TUMBLING_BRIDGE_PLATFORM_ACT_IDLE,
    TUMBLING_BRIDGE_PLATFORM_ACT_UNSTABLE,
    TUMBLING_BRIDGE_PLATFORM_ACT_FALL,
    TUMBLING_BRIDGE_PLATFORM_ACT_END,
};

/* Tumbling Bridge */
enum oBehParams2ndByteTumblingBridge { // bridgeID
    TUMBLING_BRIDGE_BP_WF,
    TUMBLING_BRIDGE_BP_BBH,
    TUMBLING_BRIDGE_BP_LLL,
    TUMBLING_BRIDGE_BP_BITFS,
};
enum oActionsTumblingBridge {
    TUMBLING_BRIDGE_ACT_FAR,
    TUMBLING_BRIDGE_ACT_SPAWN_SECTIONS,
    TUMBLING_BRIDGE_ACT_NEAR,
    TUMBLING_BRIDGE_ACT_RESET,
};

/* Bomp (both variants) */
enum oActionsBomp {
    BOMP_ACT_WAIT,
    BOMP_ACT_POKE_OUT,
    BOMP_ACT_EXTEND,
    BOMP_ACT_RETRACT,
};

/* WF Tower Platform Group */
enum oActionsWFTowerPlatformGroup {
    WF_TOWER_PLATFORM_GROUP_ACT_INACTIVE,
    WF_TOWER_PLATFORM_GROUP_ACT_SPAWN_PLATFORMS,
    WF_TOWER_PLATFORM_GROUP_ACT_ACTIVE,
    WF_TOWER_PLATFORM_GROUP_ACT_REMOVE_PLATFORMS,
};

/* WF Tower Sliding Platform */
enum oActionsWFTowerSlidingPlatform {
    WF_TOWER_SLIDING_PLATFORM_ACT_BACKWARD,
    WF_TOWER_SLIDING_PLATFORM_ACT_FORWARD,
};

/* WF Tower Elevator Platform */
enum oActionsWFTowerElevatorPlatform {
    WF_TOWER_ELEVATOR_PLATFORM_ACT_BOTTOM,
    WF_TOWER_ELEVATOR_PLATFORM_ACT_MOVING_UP,
    WF_TOWER_ELEVATOR_PLATFORM_ACT_TOP,
    WF_TOWER_ELEVATOR_PLATFORM_ACT_MOVING_DOWN,
};

/* WF Sliding Brick Platform */
enum oBehParams2ndByteWFSlidingBrickPlatform {
    WF_SLID_BRICK_PTFM_BP_0,
    WF_SLID_BRICK_PTFM_BP_MOV_VEL_10,
    WF_SLID_BRICK_PTFM_BP_MOV_VEL_15,
    WF_SLID_BRICK_PTFM_BP_MOV_VEL_20,
};
enum oActionsWFSlidingBrickPlatform {
    WF_SLID_BRICK_PTFM_ACT_WAIT,
    WF_SLID_BRICK_PTFM_ACT_EXTEND,
    WF_SLID_BRICK_PTFM_ACT_RETRACT,
};

/* Sliding Platform */
enum oBehParams1stByteSlidingPlatform { // collisionDataIndex
    /*0x00*/ SLIDING_PLATFORM_BP1_BITS_SLIDING_PLATFORM,
    /*0x01*/ SLIDING_PLATFORM_BP1_BITS_TWIN_SLIDING_PLATFORMS,
    /*0x02*/ SLIDING_PLATFORM_BP1_BITFS_MOVING_SQUARE,
    /*0x03*/ SLIDING_PLATFORM_BP1_BITFS_SLIDING_PLATFORM,
    /*0x04*/ SLIDING_PLATFORM_BP1_RR_SLIDING_PLATFORM,
    /*0x05*/ SLIDING_PLATFORM_BP1_RR_PYRAMID,
    /*0x06*/ SLIDING_PLATFORM_BP1_NULL,
    /*0x07*/ SLIDING_PLATFORM_BP1_BITDW_SLIDING_PLATFORM,
    /*0x07*/ SLIDING_PLATFORM_BP1_TYPES_MASK = 0x07,
};
enum oBehParams2ndByteSlidingPlatform {
    SLIDING_PLATFORM_BP2_LENGTH_MASK   = 0x3F,
    SLIDING_PLATFORM_BP2_FLAG_INVERTED = BIT(6),
};

/* BITDW Pyramid Platforms */
enum oActionsBITDWPyramidPlatforms {
    BITDW_PYRAMID_PLATFORM_ACT_INIT_DIRECTION,
    BITDW_PYRAMID_PLATFORM_ACT_MOVE_0,
    BITDW_PYRAMID_PLATFORM_ACT_MOVE_90,
    BITDW_PYRAMID_PLATFORM_ACT_MOVE_180,
    BITDW_PYRAMID_PLATFORM_ACT_MOVE_270,
};

/* Rotating Platform */
enum oActionsRotatingPlatform {
    ROTATING_PLATFORM_ACT_STOPPED,
    ROTATING_PLATFORM_ACT_MOVING,
};

/* Seesaw Platform */
enum oBehParams2ndByteSeesawPlatform {
    SEESAW_PLATFORM_BP_BITDW,
    SEESAW_PLATFORM_BP_BITS,
    SEESAW_PLATFORM_BP_BITS_W_SHAPED,
    SEESAW_PLATFORM_BP_BOB_BRIDGE,
    SEESAW_PLATFORM_BP_BITFS,
    SEESAW_PLATFORM_BP_RR,
    SEESAW_PLATFORM_BP_RR_L_SHAPED,
    SEESAW_PLATFORM_BP_VCUTM,
};

/* Fake Moneybag Coin */
enum oActionsFakeMoneybagCoin {
    FAKE_MONEYBAG_COIN_ACT_IDLE,
    FAKE_MONEYBAG_COIN_ACT_TRANSFORM,
};

/* Moneybag */
enum oActionsMoneybag {
    MONEYBAG_ACT_APPEAR,
    MONEYBAG_ACT_UNUSED_APPEAR,
    MONEYBAG_ACT_MOVE_AROUND,
    MONEYBAG_ACT_RETURN_HOME,
    MONEYBAG_ACT_DISAPPEAR,
    MONEYBAG_ACT_DEATH,
};
enum oMoneybagJumpStates {
    MONEYBAG_JUMP_LANDING,
    MONEYBAG_JUMP_PREPARE,
    MONEYBAG_JUMP_JUMP,
    MONEYBAG_JUMP_JUMP_AND_BOUNCE,
    MONEYBAG_JUMP_WALK_AROUND,
    MONEYBAG_JUMP_WALK_HOME,
};
enum animIDsMoneybag {
    MONEYBAG_ANIM_IDLE,
    MONEYBAG_ANIM_PREPARE_JUMP,
    MONEYBAG_ANIM_JUMP,
    MONEYBAG_ANIM_LAND,
    MONEYBAG_ANIM_WALK,
};

/* Bowling Ball */
enum oActionsBowlingBall {
    BBALL_ACT_INITIALIZE,
    BBALL_ACT_ROLL,
};

/* Bowling Ball + Bowling Ball Spawner (all variants) */
enum oBehParams2ndByteBowlingBall {
    BBALL_BP_STYPE_BOB_UPPER,
    BBALL_BP_STYPE_TTM,
    BBALL_BP_STYPE_BOB_LOWER,
    BBALL_BP_STYPE_THI_LARGE,
    BBALL_BP_STYPE_THI_SMALL,
};

/* Bowling Ball (Free) */
enum oActionsFreeBowlingBall {
    FREE_BBALL_ACT_IDLE,
    FREE_BBALL_ACT_ROLL,
    FREE_BBALL_ACT_RESET,
};

/* THI Top */
enum oActionsTHITop {
    THI_TOP_ACT_IDLE,
    THI_TOP_ACT_DRAIN_WATER,
};

/* Beta Chest Lid */
enum oActionsBetaChestLid {
    BETA_CHEST_ACT_IDLE_CLOSED,
    BETA_CHEST_ACT_OPENING,
    BETA_CHEST_ACT_IDLE_OPEN,
};

/* Treasure Chest Top */
enum oActionsTreasureChestTop {
    TREASURE_CHEST_TOP_ACT_CLOSED,
    TREASURE_CHEST_TOP_ACT_OPENING,
    TREASURE_CHEST_TOP_ACT_OPENED,
    TREASURE_CHEST_TOP_ACT_CLOSING,
};

/* Treasure Chest Bottom */
enum oBehParams2ndByteTreasureChest {
    TREASURE_CHEST_BP_0,
    TREASURE_CHEST_BP_1,
    TREASURE_CHEST_BP_2,
    TREASURE_CHEST_BP_3,
    TREASURE_CHEST_BP_4,
};
enum oActionsTreasureChestBottom {
    TREASURE_CHEST_BOTTOM_ACT_CLOSE,
    TREASURE_CHEST_BOTTOM_ACT_OPENING,
    TREASURE_CHEST_BOTTOM_ACT_OPENED,
};

/* Treasure Chest Manager */
enum oActionsTreasureChestManager {
    TREASURE_CHEST_ACT_SUCCESS_SOUND,
    TREASURE_CHEST_ACT_REWARD,
    TREASURE_CHEST_ACT_END,
};

/* BBH Tilting Trap Platform */
enum oActionsBBHTiltingTrapPlatform {
    BBH_TILTING_TRAP_PLATFORM_ACT_MARIO_ON,
    BBH_TILTING_TRAP_PLATFORM_ACT_MARIO_OFF,
};

/* Boo in Castle */
enum oActionsBooInCastle {
    BOO_IN_CASTLE_ACT_INIT,
    BOO_IN_CASTLE_ACT_IDLE,
    BOO_IN_CASTLE_ACT_FLEE,
};

/* Boo */
enum oBehParams2ndByteBoo {
    BOO_BP_GHOST_HUNT,
    BOO_BP_NORMAL,
    BOO_BP_MERRY_GO_ROUND,
};
enum oActionsBoo {
    BOO_ACT_STOPPED,
    BOO_ACT_CHASING_MARIO,
    BOO_ACT_BOUNCED_ON,
    BOO_ACT_ATTACKED,
    BOO_ACT_DEATH,
    BOO_ACT_MERRY_GO_ROUND_WAIT,
};
enum oBooDeathStatuses {
    BOO_DEATH_STATUS_ALIVE,
    BOO_DEATH_STATUS_DYING,
    BOO_DEATH_STATUS_DEAD,
};
enum BooAttackStatuses {
    BOO_NOT_ATTACKED,
    BOO_ATTACKED,
    BOO_BOUNCED_ON = -1,
};

/* Big Boo */
enum oBehParams2ndByteBigBoo {
    BIG_BOO_BP_GHOST_HUNT,
    BIG_BOO_BP_MERRY_GO_ROUND,
    BIG_BOO_BP_BALCONY,
};

/* Fishing Boo */
enum oActionsFishingBoo {
    FISHING_BOO_ACT_0,
    FISHING_BOO_ACT_1,
    FISHING_BOO_ACT_2,
    FISHING_BOO_ACT_3,
    FISHING_BOO_ACT_4,
    FISHING_BOO_ACT_5,
    FISHING_BOO_ACT_6,
    FISHING_BOO_ACT_SPAWN_FLAMES,
    FISHING_BOO_ACT_8,
    FISHING_BOO_ACT_9,
    FISHING_BOO_ACT_10,
};

/* Beta Boo Key */
enum oActionsBetaBooKey {
    BETA_BOO_KEY_ACT_IN_BOO,
    BETA_BOO_KEY_ACT_DROPPING,
    BETA_BOO_KEY_ACT_DROPPED,
};

/* Boo Cage */
enum oActionsBooCage {
    BOO_CAGE_ACT_IN_BOO,
    BOO_CAGE_ACT_FALLING,
    BOO_CAGE_ACT_ON_GROUND,
    BOO_CAGE_ACT_MARIO_JUMPING_IN,
    BOO_CAGE_ACT_USELESS,
};

/* BBH Staircase */
enum oBehParams2ndByteBBHStaircase {
    BOO_STAIRCASE_BP_0,
    BOO_STAIRCASE_BP_1,
    BOO_STAIRCASE_BP_2,
};
enum oActionsBBHStaircase {
    BOO_STAIRCASE_ACT_INIT,
    BOO_STAIRCASE_ACT_RISE,
    BOO_STAIRCASE_ACT_WOBBLE,
    BOO_STAIRCASE_ACT_PLAY_JINGLE,
};

/* BBH Haunted Bookshelf */
enum oActionsBBHHauntedBookshelf {
    HAUNTED_BOOKSHELF_ACT_IDLE,
    HAUNTED_BOOKSHELF_ACT_RECEDE,
};

/* BBH Bookshelf Manager */
enum oActionsBBHBookshelfManager {
    BOOKSHELF_MANAGER_ACT_SPAWN_SWITCHES,
    BOOKSHELF_MANAGER_ACT_CHECK_ACTIVATE,
    BOOKSHELF_MANAGER_ACT_ACTIVE,
    BOOKSHELF_MANAGER_ACT_RECEDE,
    BOOKSHELF_MANAGER_ACT_END,
};

/* BBH Book Switch */
enum oBehParams2ndByteBBHBookSwitch {
    BOOK_SWITCH_BP_CHOICE_1,
    BOOK_SWITCH_BP_CHOICE_2,
    BOOK_SWITCH_BP_CHOICE_3,
};
enum oActionsBBHBookSwitch {
    BOOK_SWITCH_ACT_UNPRESSED,
    BOOK_SWITCH_ACT_ACTIVE,
    BOOK_SWITCH_ACT_PRESSED,
};

/* Flying Bookend */
enum oActionsFlyingBookend {
    FLYING_BOOKEND_ACT_INIT,
    FLYING_BOOKEND_ACT_GROW,
    FLYING_BOOKEND_ACT_TURN_TOWARD_MARIO,
    FLYING_BOOKEND_ACT_FLY_FORWARD,
};
enum animIDsFlyingBookend {
    FLYING_BOOKEND_ANIM_SPAWN,
    FLYING_BOOKEND_ANIM_BITE,
    FLYING_BOOKEND_ANIM_GROW,
};

/* BBH Merry-Go-Round */
enum oActionsBBHMerryGoRound {
    BBH_MERRY_GO_ROUND_ACT_SPAWN_BOOS,
    BBH_MERRY_GO_ROUND_ACT_WAIT,
    BBH_MERRY_GO_ROUND_ACT_STOPPED,
};
enum BBHRooms { // gMarioCurrentRoom
    BBH_NEAR_MERRY_GO_ROUND_ROOM = 0xA,
    BBH_DYNAMIC_SURFACE_ROOM     = 0x0,
    BBH_OUTSIDE_ROOM             = 0xD,
};

/* Coffin Spawner */
enum oActionsCoffinSpawner {
    COFFIN_SPAWNER_ACT_COFFINS_UNLOADED,
    COFFIN_SPAWNER_ACT_COFFINS_LOADED,
};

/* Coffin */
enum oBehParams2ndByteCoffin {
    COFFIN_BP_STATIONARY,
    COFFIN_BP_MOVING,
};
enum oActionsCoffin {
    COFFIN_ACT_IDLE,
    COFFIN_ACT_STAND_UP,
};

/* WDW Arrow Lift */
enum oActionsArrowLift {
    ARROW_LIFT_ACT_IDLE,
    ARROW_LIFT_ACT_MOVING_AWAY,
    ARROW_LIFT_ACT_MOVING_BACK,
};

/* Toad */
enum animIDsToad {
    TOAD_ANIM_WEST_WAVE_THEN_TURN, // 1 frame
    TOAD_ANIM_WEST_WALKING,
    TOAD_ANIM_EAST_NOD_THEN_TURN,  // 1 frame
    TOAD_ANIM_EAST_WALKING,
    TOAD_ANIM_WEST_STANDING,
    TOAD_ANIM_EAST_STANDING,
    TOAD_ANIM_WEST_WAVING_BOTH_ARMS,
    TOAD_ANIM_EAST_WAVING_ONE_ARM,
};

/* Intro Peach */
enum oActionsIntroPeach {
    PEACH_ACT_INIT,
    PEACH_ACT_FADE_1,
    PEACH_ACT_UNFADE,
    PEACH_ACT_FADE_2,
};
enum animIDsPeach { //! TODO: anim names 0-3 & 6-8
    PEACH_ANIM_0,
    PEACH_ANIM_1,
    PEACH_ANIM_2,
    PEACH_ANIM_3,
    PEACH_ANIM_DESCEND_FROM_WINDOW,
    PEACH_ANIM_LOOK_UP_AND_OPEN_EYES,
    PEACH_ANIM_DIALOG_1_PART_1,
    PEACH_ANIM_DIALOG_1_PART_2,
    PEACH_ANIM_DIALOG_1_PART_3,
    PEACH_ANIM_THANKS_TO_YOU,
    PEACH_ANIM_KISS,
    PEACH_ANIM_WAVING,
};

/* Yoshi */
enum oActionsYoshi {
    YOSHI_ACT_IDLE,
    YOSHI_ACT_WALK,
    YOSHI_ACT_TALK,
    YOSHI_ACT_WALK_JUMP_OFF_ROOF,
    YOSHI_ACT_FINISH_JUMPING_AND_DESPAWN,
    YOSHI_ACT_GIVE_PRESENT,
    YOSHI_ACT_CREDITS = 0xA,
};
enum animIDsYoshi {
    YOSHI_ANIM_IDLE,
    YOSHI_ANIM_WALK,
    YOSHI_ANIM_JUMP,
};

/* Koopa Race end waypoint */
enum oKoopaRaceEndpointRaceStatuses {
    KOOPA_RACE_ENDPOINT_STATUS_MARIO_CHEATED = -1,
    KOOPA_RACE_ENDPOINT_STATUS_KOOPA_WON     =  0,
    KOOPA_RACE_ENDPOINT_STATUS_MARIO_WON     =  1,
};

/* Koopa (General) */
enum oKoopaTheQuickRaceIndices {
    KOOPA_THE_QUICK_BOB_INDEX,
    KOOPA_THE_QUICK_THI_INDEX,
};
enum oBehParams2ndByteKoopa {
    KOOPA_BP_UNSHELLED,
    KOOPA_BP_NORMAL,
    KOOPA_BP_KOOPA_THE_QUICK_BASE,
    KOOPA_BP_KOOPA_THE_QUICK_BOB = (KOOPA_BP_KOOPA_THE_QUICK_BASE + KOOPA_THE_QUICK_BOB_INDEX),
    KOOPA_BP_KOOPA_THE_QUICK_THI = (KOOPA_BP_KOOPA_THE_QUICK_BASE + KOOPA_THE_QUICK_THI_INDEX),
    KOOPA_BP_TINY,
};
enum animIDsKoopa {
    KOOPA_ANIM_SHELLED_UNUSED3,
    KOOPA_ANIM_SHELLED_RUN_AWAY,
    KOOPA_ANIM_UNSHELLED_LYING,
    KOOPA_ANIM_UNSHELLED_RUN,
    KOOPA_ANIM_UNUSED_4,
    KOOPA_ANIM_SHELLED_LYING,
    KOOPA_ANIM_STAND_UP,
    KOOPA_ANIM_STOPPED,
    KOOPA_ANIM_UNUSED_8,
    KOOPA_ANIM_WALK,
    KOOPA_ANIM_SHELLED_WALK_STOP,
    KOOPA_ANIM_WALK_START,
    KOOPA_ANIM_THE_QUICK_JUMP,
    KOOPA_ANIM_THE_QUICK_LAND,
};

/* Unshelled Koopa */
enum oActionsUnshelledKoopa {
    KOOPA_UNSHELLED_ACT_RUN,
    KOOPA_UNSHELLED_ACT_DIVE,
    KOOPA_UNSHELLED_ACT_LYING,
    KOOPA_UNSHELLED_ACT_UNUSED3,
};

/* Shelled Koopa */
enum oActionsShelledKoopa {
    KOOPA_SHELLED_ACT_STOPPED,
    KOOPA_SHELLED_ACT_WALK,
    KOOPA_SHELLED_ACT_RUN_FROM_MARIO,
    KOOPA_SHELLED_ACT_LYING,
    KOOPA_SHELLED_ACT_DIE,
};
    /* oSubAction */
enum oSubActionsShelledKoopaActWalk { // KOOPA_SHELLED_ACT_WALK
    KOOPA_SHELLED_SUB_ACT_START_WALK,
    KOOPA_SHELLED_SUB_ACT_WALK,
    KOOPA_SHELLED_SUB_ACT_STOP_WALK,
};

/* Koopa The Quick */
enum oActionsKoopaTheQuick {
    KOOPA_THE_QUICK_ACT_WAIT_BEFORE_RACE,
    KOOPA_THE_QUICK_ACT_UNUSED1,
    KOOPA_THE_QUICK_ACT_SHOW_INIT_TEXT,
    KOOPA_THE_QUICK_ACT_RACE,
    KOOPA_THE_QUICK_ACT_DECELERATE,
    KOOPA_THE_QUICK_ACT_STOP,
    KOOPA_THE_QUICK_ACT_AFTER_RACE,
};
    /* oSubAction */
enum oSubActionsKoopaTheQuickActRace { // KOOPA_THE_QUICK_ACT_RACE
    KOOPA_THE_QUICK_SUB_ACT_START_RUN,
    KOOPA_THE_QUICK_SUB_ACT_RUN,
    KOOPA_THE_QUICK_SUB_ACT_JUMP,
};

/* Koopa Flag */
enum animIDsKoopaFlag {
    KOOPA_FLAG_ANIM_WAVE,
};

/* Pokey */
enum oActionsPokey {
    POKEY_ACT_UNINITIALIZED,
    POKEY_ACT_WANDER,
    POKEY_ACT_UNLOAD_PARTS,
};
enum oAnimStatesPokey {
    POKEY_ANIM_STATE_0,
    POKEY_ANIM_STATE_NONSTANDARD_ACTION,
};

/* Pokey Body Part */
enum oBehParams2ndBytePokeyBodeyPart {
    POKEY_PART_BP_HEAD,
    POKEY_PART_BP_LOWEST = (POKEY_NUM_SEGMENTS - 0x1),
};

/* Swoop */
enum oBehParams2ndByteSwoop {
    SWOOP_BP_0,
    SWOOP_BP_1,
};
enum oActionsSwoop {
    SWOOP_ACT_IDLE,
    SWOOP_ACT_MOVE,
};
enum animIDsSwoop {
    SWOOP_ANIM_FLY,
    SWOOP_ANIM_IDLE,
};

/* Fly guy */
    /* oBehParams2ndByte */
    #define FLY_GUY_BP_LUNGES                               0x0
    #define FLY_GUY_BP_SHOOTS_FIRE                          0x1
    /* oAction */
    #define FLY_GUY_ACT_IDLE                                0x0
    #define FLY_GUY_ACT_APPROACH_MARIO                      0x1
    #define FLY_GUY_ACT_LUNGE                               0x2
    #define FLY_GUY_ACT_SHOOT_FIRE                          0x3
    /* Animations */
    #define FLY_GUY_ANIM_FLYING                             0x0

/* Goomba triplet spawner */
    /* oBehParams2ndByte */
    #define GOOMBA_TRIPLET_SPAWNER_BP_SIZE_MASK             0x03
    #define GOOMBA_TRIPLET_SPAWNER_BP_EXTRA_GOOMBAS_MASK    0xFC
    /* oAction */
    #define GOOMBA_TRIPLET_SPAWNER_ACT_UNLOADED             0x0
    #define GOOMBA_TRIPLET_SPAWNER_ACT_LOADED               0x1

/* Goomba */
    /* oBehParams2ndByte */
    #define GOOMBA_SIZE_REGULAR                             0x00
    #define GOOMBA_SIZE_HUGE                                0x01
    #define GOOMBA_SIZE_TINY                                0x02
    #define GOOMBA_BP_SIZE_MASK                             0x03
    #define GOOMBA_BP_TRIPLET_FLAG_MASK                     0xFC
#if defined(FLOOMBAS) && defined(INTRO_FLOOMBAS)
    /* BPARAM3 */
    #define GOOMBA_BP3_FLOOMBA_MIRRORED_STARTUP_ANIM        BIT(7)
#endif
    /* oAction */
    #define GOOMBA_ACT_WALK                                 0x0
    #define GOOMBA_ACT_ATTACKED_MARIO                       0x1
    #define GOOMBA_ACT_JUMP                                 0x2
#if defined(FLOOMBAS) && defined(INTRO_FLOOMBAS)
    #define FLOOMBA_ACT_STARTUP                             0x3
#endif
    /* oAnimState */
    #define GOOMBA_ANIM_STATE_EYES_OPEN                     OBJ_BLINKING_ANIM_STATE_EYES_OPEN
    #define GOOMBA_ANIM_STATE_EYES_CLOSED                   OBJ_BLINKING_ANIM_STATE_EYES_CLOSED
#ifdef FLOOMBAS
    #define FLOOMBA_ANIM_STATE_EYES_OPEN                    (OBJ_BLINKING_ANIM_STATE_EYES_OPEN + 2)
    #define FLOOMBA_ANIM_STATE_EYES_CLOSED                  (OBJ_BLINKING_ANIM_STATE_EYES_CLOSED + 2)
#endif
    /* Animations */
    #define GOOMBA_ANIM_DEFAULT                             0x0

/* Chain chomp */
    /* oAction */
    #define CHAIN_CHOMP_ACT_UNINITIALIZED                   0x0
    #define CHAIN_CHOMP_ACT_MOVE                            0x1
    #define CHAIN_CHOMP_ACT_UNLOAD_CHAIN                    0x2
    /* oSubAction */
        /* CHAIN_CHOMP_ACT_MOVE */
    #define CHAIN_CHOMP_SUB_ACT_TURN                        0x0
    #define CHAIN_CHOMP_SUB_ACT_LUNGE                       0x1
    /* oChainChompReleaseStatus */
    #define CHAIN_CHOMP_NOT_RELEASED                        0x0
    #define CHAIN_CHOMP_RELEASED_TRIGGER_CUTSCENE           0x1
    #define CHAIN_CHOMP_RELEASED_LUNGE_AROUND               0x2
    #define CHAIN_CHOMP_RELEASED_BREAK_GATE                 0x3
    #define CHAIN_CHOMP_RELEASED_JUMP_AWAY                  0x4
    #define CHAIN_CHOMP_RELEASED_END_CUTSCENE               0x5
    /* Animations */
    #define CHAIN_CHOMP_ANIM_CHOMPING                       0x0

/* Chain chomp chain part */
    /* oBehParams2ndByte */
    #define CHAIN_CHOMP_CHAIN_PART_BP_PIVOT                 0x0

/* Wooden post */
    /* oBehParams */

/* Wiggler */
    /* oAction */
    #define WIGGLER_ACT_UNINITIALIZED                       0x0
    #define WIGGLER_ACT_WALK                                0x1
    #define WIGGLER_ACT_KNOCKBACK                           0x2
    #define WIGGLER_ACT_JUMPED_ON                           0x3
    #define WIGGLER_ACT_SHRINK                              0x4
    #define WIGGLER_ACT_FALL_THROUGH_FLOOR                  0x5
    /* oWigglerTextStatus */
    #define WIGGLER_TEXT_STATUS_AWAIT_DIALOG                0x0
    #define WIGGLER_TEXT_STATUS_SHOWING_DIALOG              0x1
    #define WIGGLER_TEXT_STATUS_COMPLETED_DIALOG            0x2
    /* Animations */
    #define WIGGLER_ANIM_WALK                               0x0

/* Spiny */
    /* oAction */
    #define SPINY_ACT_WALK                                  0x0
    #define SPINY_ACT_HELD_BY_LAKITU                        0x1
    #define SPINY_ACT_THROWN_BY_LAKITU                      0x2
    #define SPINY_ACT_ATTACKED_MARIO                        0x3
    /* Animations */
    #define SPINY_ANIM_DEFAULT                              0x0

/* Enemy lakitu */
    /* oAction */
    #define ENEMY_LAKITU_ACT_UNINITIALIZED                  0x0
    #define ENEMY_LAKITU_ACT_MAIN                           0x1
    /* oSubAction */
        /* ENEMY_LAKITU_ACT_MAIN */
    #define ENEMY_LAKITU_SUB_ACT_NO_SPINY                   0x0
    #define ENEMY_LAKITU_SUB_ACT_HOLD_SPINY                 0x1
    #define ENEMY_LAKITU_SUB_ACT_THROW_SPINY                0x2
    /* Animations */
    #define ENEMY_LAKITU_ANIM_SPAWN                         0x0
    #define ENEMY_LAKITU_ANIM_NO_SPINY                      0x1
    #define ENEMY_LAKITU_ANIM_THROW_SPINY                   0x2
    #define ENEMY_LAKITU_ANIM_HOLD_SPINY                    0x3

/* Cloud */
    /* oBehParams2ndByte */
    #define CLOUD_BP_FWOOSH                                 0x0
    #define CLOUD_BP_LAKITU_CLOUD                           0x1
    #define CLOUD_BP_FWOOSH_FACE                            0x5
    /* oAction */
    #define CLOUD_ACT_SPAWN_PARTS                           0x0
    #define CLOUD_ACT_MAIN                                  0x1
    #define CLOUD_ACT_UNLOAD                                0x2
    #define CLOUD_ACT_FWOOSH_HIDDEN                         0x3

/* Intro Lakitu */
    /* oAction */
    #define INTRO_LAKITU_ACT_INIT                           0x0
    #define INTRO_LAKITU_ACT_CUTSCENE_INTRO_1               0x1
    #define INTRO_LAKITU_ACT_CUTSCENE_INTRO_2               0x2
    #define INTRO_LAKITU_ACT_CUTSCENE_INTRO_3               0x3
    #define INTRO_LAKITU_ACT_CUTSCENE_END_WAVING_1         0x64
    #define INTRO_LAKITU_ACT_CUTSCENE_END_WAVING_2         0x65
    #define INTRO_LAKITU_ACT_CUTSCENE_END_WAVING_3         0x66
    /* Animations */
    #define INTRO_LAKITU_ANIM_DEFAULT                       0x0

/* Camera Lakitu */
    /* oBehParams2ndByte */
    #define CAMERA_LAKITU_BP_FOLLOW_CAMERA                  0x0
    #define CAMERA_LAKITU_BP_INTRO                          0x1
    /* oAction */
    #define CAMERA_LAKITU_INTRO_ACT_TRIGGER_CUTSCENE        0x0
    #define CAMERA_LAKITU_INTRO_ACT_SPAWN_CLOUD             0x1
    #define CAMERA_LAKITU_INTRO_ACT_SHOW_DIALOG             0x2
    /* Animations */
    #define CAMERA_LAKITU_ANIM_DEFAULT                      0x0

/* RR Cruiser Wing */
    /* oBehParams2ndByte */
    #define CRUISER_WING_BP_CLOCKWISE                       0x0
    #define CRUISER_WING_BP_COUNTERCLOCKWISE                0x1

/* Manta Ray */
    /* oAction */
    #define MANTA_ACT_SPAWN_RINGS                           0x0
    #define MANTA_ACT_NO_RINGS                              0x1
    /* Animations */
    #define MANTA_ANIM_SWIM                                 0x0

/* Sushi Shark */
    /* Animations */
    #define SUSHI_ANIM_SWIM                                 0x0

/* Monty mole */
    /* oBehParams2ndByte */
    #define MONTY_MOLE_BP_NO_ROCK                           0x0
    #define MONTY_MOLE_BP_ROCK                              0x1
    /* oAction */
    #define MONTY_MOLE_ACT_SELECT_HOLE                      0x0
    #define MONTY_MOLE_ACT_RISE_FROM_HOLE                   0x1
    #define MONTY_MOLE_ACT_SPAWN_ROCK                       0x2
    #define MONTY_MOLE_ACT_BEGIN_JUMP_INTO_HOLE             0x3
    #define MONTY_MOLE_ACT_THROW_ROCK                       0x4
    #define MONTY_MOLE_ACT_JUMP_INTO_HOLE                   0x5
    #define MONTY_MOLE_ACT_HIDE                             0x6
    #define MONTY_MOLE_ACT_JUMP_OUT_OF_HOLE                 0x7
    /* Animations */
    #define MONTY_MOLE_ANIM_JUMP_INTO_HOLE                  0x0
    #define MONTY_MOLE_ANIM_RISE                            0x1
    #define MONTY_MOLE_ANIM_GET_ROCK                        0x2
    #define MONTY_MOLE_ANIM_BEGIN_JUMP_INTO_HOLE            0x3
    #define MONTY_MOLE_ANIM_JUMP_OUT_OF_HOLE_DOWN           0x4
    #define MONTY_MOLE_ANIM_UNUSED_5                        0x5
    #define MONTY_MOLE_ANIM_UNUSED_6                        0x6
    #define MONTY_MOLE_ANIM_UNUSED_7                        0x7
    #define MONTY_MOLE_ANIM_THROW_ROCK                      0x8
    #define MONTY_MOLE_ANIM_JUMP_OUT_OF_HOLE_UP             0x9

/* Monty mole rock */
    /* oAction */
    #define MONTY_MOLE_ROCK_ACT_HELD                        0x0
    #define MONTY_MOLE_ROCK_ACT_MOVE                        0x1

/* Ukiki */
    /* oBehParams2ndByte */
    #define UKIKI_BP_CAGE                                   0x0
    #define UKIKI_BP_CAP                                    0x1
    /* oAction */
    #define UKIKI_ACT_IDLE                                  0x0
    #define UKIKI_ACT_RUN                                   0x1
    #define UKIKI_ACT_TURN_TO_MARIO                         0x2
    #define UKIKI_ACT_JUMP                                  0x3
    #define UKIKI_ACT_GO_TO_CAGE                            0x4
    #define UKIKI_ACT_WAIT_TO_RESPAWN                       0x5
    #define UKIKI_ACT_UNUSED_TURN                           0x6
    #define UKIKI_ACT_RETURN_HOME                           0x7
    /* oSubAction */
        /* UKIKI_ACT_IDLE, UKIKI_ACT_WAIT_TO_RESPAWN, UKIKI_ACT_UNUSED_TURN */
    #define UKIKI_SUB_ACT_TAUNT_NONE                        0x0
    #define UKIKI_SUB_ACT_TAUNT_ITCH                        0x1
    #define UKIKI_SUB_ACT_TAUNT_SCREECH                     0x2
    #define UKIKI_SUB_ACT_TAUNT_JUMP_CLAP                   0x3
    #define UKIKI_SUB_ACT_TAUNT_HANDSTAND                   0x4
        /* UKIKI_ACT_JUMP */
    #define UKIKI_SUB_ACT_JUMP_JUMP                         0x0
    #define UKIKI_SUB_ACT_JUMP_LAND                         0x1
        /* UKIKI_ACT_GO_TO_CAGE */
    #define UKIKI_SUB_ACT_CAGE_RUN_TO_CAGE                  0x0
    #define UKIKI_SUB_ACT_CAGE_WAIT_FOR_MARIO               0x1
    #define UKIKI_SUB_ACT_CAGE_TALK_TO_MARIO                0x2
    #define UKIKI_SUB_ACT_CAGE_TURN_TO_CAGE                 0x3
    #define UKIKI_SUB_ACT_CAGE_JUMP_TO_CAGE                 0x4
    #define UKIKI_SUB_ACT_CAGE_LAND_ON_CAGE                 0x5
    #define UKIKI_SUB_ACT_CAGE_SPIN_ON_CAGE                 0x6
    #define UKIKI_SUB_ACT_CAGE_DESPAWN                      0x7
    /* oUkikiTextState */
    #define UKIKI_TEXT_DEFAULT                              0x0
    #define UKIKI_TEXT_CAGE_TEXTBOX                         0x1
    #define UKIKI_TEXT_GO_TO_CAGE                           0x2
    #define UKIKI_TEXT_STOLE_CAP                            0x3
    #define UKIKI_TEXT_HAS_CAP                              0x4
    #define UKIKI_TEXT_GAVE_CAP_BACK                        0x5
    #define UKIKI_TEXT_DO_NOT_LET_GO                        0x6
    #define UKIKI_TEXT_STEAL_CAP                            0x7
    /* Animations */
    #define UKIKI_ANIM_RUN                                  0x0
    #define UKIKI_ANIM_UNUSED_WALK                          0x1
    #define UKIKI_ANIM_UNUSED_APOSE                         0x2
    #define UKIKI_ANIM_UNUSED_DEATH                         0x3
    #define UKIKI_ANIM_SCREECH                              0x4
    #define UKIKI_ANIM_JUMP_CLAP                            0x5
    #define UKIKI_ANIM_UNUSED_HOP                           0x6
    #define UKIKI_ANIM_LAND                                 0x7
    #define UKIKI_ANIM_JUMP                                 0x8
    #define UKIKI_ANIM_ITCH                                 0x9
    #define UKIKI_ANIM_HANDSTAND                            0xA
    #define UKIKI_ANIM_TURN                                 0xB
    #define UKIKI_ANIM_HELD                                 0xC
    /* oAnimState */
    #define UKIKI_ANIM_STATE_DEFAULT                        0x0
    #define UKIKI_ANIM_STATE_EYE_CLOSED                     0x1
    #define UKIKI_ANIM_STATE_CAP_ON                         0x2
    /* oUkikiHasCap */
    #define UKIKI_CAP_OFF                                   0x0
    #define UKIKI_CAP_ON                                    0x1

/* Ukiki Cage Star */
    /* oAction */
    #define UKIKI_CAGE_STAR_ACT_IN_CAGE                     0x0
    #define UKIKI_CAGE_STAR_ACT_SPAWN_STAR                  0x1

/* Ukiki Cage */
    /* oAction */
    #define UKIKI_CAGE_ACT_WAIT_FOR_UKIKI                   0x0
    #define UKIKI_CAGE_ACT_SPIN                             0x1
    #define UKIKI_CAGE_ACT_FALL                             0x2
    #define UKIKI_CAGE_ACT_HIDE                             0x3

/* Piranha Plant */
    /* oAction */
    #define PIRANHA_PLANT_ACT_IDLE                          0x0
    #define PIRANHA_PLANT_ACT_SLEEPING                      0x1
    #define PIRANHA_PLANT_ACT_BITING                        0x2
    #define PIRANHA_PLANT_ACT_WOKEN_UP                      0x3
    #define PIRANHA_PLANT_ACT_STOPPED_BITING                0x4
    #define PIRANHA_PLANT_ACT_ATTACKED                      0x5
    #define PIRANHA_PLANT_ACT_SHRINK_AND_DIE                0x6
    #define PIRANHA_PLANT_ACT_WAIT_TO_RESPAWN               0x7
    #define PIRANHA_PLANT_ACT_RESPAWN                       0x8
    /* Animations */
    #define PIRANHA_PLANT_ANIM_BITE                         0x0
    #define PIRANHA_PLANT_ANIM_UNUSED_1                     0x1
    #define PIRANHA_PLANT_ANIM_FALLING_OVER                 0x2
    #define PIRANHA_PLANT_ANIM_UNUSED_3                     0x3
    #define PIRANHA_PLANT_ANIM_UNUSED_4                     0x4
    #define PIRANHA_PLANT_ANIM_UNUSED_5                     0x5
    #define PIRANHA_PLANT_ANIM_STOP_BITING                  0x6
    #define PIRANHA_PLANT_ANIM_UNUSED_7                     0x7
    #define PIRANHA_PLANT_ANIM_SLEEPING                     0x8

/* Piranha Plant Bubble */
    /* oAction */
    #define PIRANHA_PLANT_BUBBLE_ACT_IDLE                   0x0
    #define PIRANHA_PLANT_BUBBLE_ACT_GROW_SHRINK_LOOP       0x1
    #define PIRANHA_PLANT_BUBBLE_ACT_BURST                  0x2

/* Checkerboard Platform Group */
    /* oBehParams2ndByte */
    #define CHECKERBOARD_PLATFORM_GROUP_BP_SET_DEFAULT      0x00
    #define CHECKERBOARD_PLATFORM_GROUP_BP_DEFAULT_MAX      0x41

/* Checkerboard Platform */
    /* oBehParams2ndByte */
    #define CHECKERBOARD_PLATFORM_BP_MOVE_UP                0x0
    #define CHECKERBOARD_PLATFORM_BP_MOVE_DOWN              0x1
    /* oAction */
    #define CHECKERBOARD_PLATFORM_ACT_MOVE_VERTICALLY       0x0
    #define CHECKERBOARD_PLATFORM_ACT_MOVE_UP               0x1
    #define CHECKERBOARD_PLATFORM_ACT_ROTATE_UP             0x2
    #define CHECKERBOARD_PLATFORM_ACT_MOVE_DOWN             0x3
    #define CHECKERBOARD_PLATFORM_ACT_ROTATE_DOWN           0x4

/* Platform on track */
enum oActionsPlatformOnTrack {
    PLATFORM_ON_TRACK_ACT_INIT,
    PLATFORM_ON_TRACK_ACT_WAIT_FOR_MARIO,
    PLATFORM_ON_TRACK_ACT_MOVE_ALONG_TRACK,
    PLATFORM_ON_TRACK_ACT_PAUSE_BRIEFLY,
    PLATFORM_ON_TRACK_ACT_FALL,
};
enum oBehParams2ndBytePlatformOnTrack {
    PLATFORM_ON_TRACK_BP_SPAWN_BALLS     = BIT(7), // 0x80

    PLATFORM_ON_TRACK_BP_MASK_TYPE       = 0x70,
    PLATFORM_ON_TRACK_BP_MASK_PATH       = 0x0F,
};
enum oBehParams1stBytePlatformOnTrack {
    PLATFORM_ON_TRACK_BP_RETURN_TO_START = BIT(0), // 0x1
    PLATFORM_ON_TRACK_BP_DONT_DISAPPEAR  = BIT(1), // 0x2
    PLATFORM_ON_TRACK_BP_DONT_TURN_YAW   = BIT(2), // 0x4
    PLATFORM_ON_TRACK_BP_DONT_TURN_ROLL  = BIT(4), // 0x8
};
enum oPlatformOnTrackTypes {
    PLATFORM_ON_TRACK_TYPE_CARPET,
    PLATFORM_ON_TRACK_TYPE_SKI_LIFT,
    PLATFORM_ON_TRACK_TYPE_CHECKERED,
    PLATFORM_ON_TRACK_TYPE_GRATE,
};

/* HMC Controllable Platform */
    /* oBehParams2ndByte / sControllablePlatformDirectionState */
    #define DIRECTION_STATE_STOPPED                         0x0
    #define DIRECTION_STATE_SOUTH                           0x1
    #define DIRECTION_STATE_NORTH                           0x2
    #define DIRECTION_STATE_EAST                            0x3
    #define DIRECTION_STATE_WEST                            0x4
    #define DIRECTION_STATE_HIT_WALL                        0x5
    #define DIRECTION_STATE_DISAPPEARING                    0x6
    /* oControllablePlatformWallHitDirection */
    #define MOVE_DIRECTION_NORTH                            0x1
    #define MOVE_DIRECTION_SOUTH                            0x2
    #define MOVE_DIRECTION_WEST                             0x3
    #define MOVE_DIRECTION_EAST                             0x4

/* HMC Controllable Platform Button */
    /* oAction */
    #define CONTROLLABLE_PLATFORM_ACT_UNPRESSED             0x0
    #define CONTROLLABLE_PLATFORM_BUTTON_ACT_PRESSED        0x1
    #define CONTROLLABLE_PLATFORM_BUTTON_ACT_CHECK_UNPRESS  0x2

/* Elevator */
    /* oBehParams2ndByte */
    #define ELEVATOR_BP_HMC_WORK                            0x0
    #define ELEVATOR_BP_HMC_EMERGENCY_EXIT                  0x1
    #define ELEVATOR_BP_HMC_NAVIGATING_THE_TOXIC_MAZE       0x2
    #define ELEVATOR_BP_HMC_LAKE                            0x3
    #define ELEVATOR_BP_BBH_MESH                            0x4
    #define ELEVATOR_BP_RAINBOW_RIDE                        0x5
    #define ELEVATOR_BP_UNUSED                              0x6
    /* oAction */
    #define ELEVATOR_ACT_IDLE                               0x0
    #define ELEVATOR_ACT_MOVING_UP                          0x1
    #define ELEVATOR_ACT_MOVING_DOWN                        0x2
    #define ELEVATOR_ACT_LANDED                             0x3
    #define ELEVATOR_ACT_LANDED_RR                          0x4
    /* oElevatorType */
    #define ELEVATOR_TYPE_DEFAULT                           0x0
    #define ELEVATOR_TYPE_RR                                0x1
    #define ELEVATOR_TYPE_ABOVE_HOME                        0x2 // roomless?

/* WDW Express Elevator */
    /* oAction */
    #define EXPRESS_ELEVATOR_ACT_IDLE                       0x0
    #define EXPRESS_ELEVATOR_ACT_MOVING_DOWN                0x1
    #define EXPRESS_ELEVATOR_ACT_PAUSING_AT_BOTTOM          0x2
    #define EXPRESS_ELEVATOR_ACT_MOVING_UP                  0x3
    #define EXPRESS_ELEVATOR_ACT_DONE                       0x4

/* Pyramid elevator */
    /* oAction */
    #define PYRAMID_ELEVATOR_IDLE                           0x0
    #define PYRAMID_ELEVATOR_START_MOVING                   0x1
    #define PYRAMID_ELEVATOR_CONSTANT_VELOCITY              0x2
    #define PYRAMID_ELEVATOR_AT_BOTTOM                      0x3

/* Pyramid top */
    /* oAction */
    #define PYRAMID_TOP_ACT_CHECK_IF_SOLVED                 0x0
    #define PYRAMID_TOP_ACT_SPINNING                        0x1
    #define PYRAMID_TOP_ACT_EXPLODE                         0x2

/* Pyramid wall */
    /* oBehParams2ndByte */
    #define PYRAMID_WALL_BP_POSITION_HIGH                   0x0
    #define PYRAMID_WALL_BP_POSITION_MIDDLE                 0x1
    #define PYRAMID_WALL_BP_POSITION_LOW                    0x2
    /* oAction */
    #define PYRAMID_WALL_ACT_MOVING_DOWN                    0x0
    #define PYRAMID_WALL_ACT_MOVING_UP                      0x1

/* Tox Box */
enum BehParamsToxBoxPatterns { // oBehParams2ndByte
    TOX_BOX_BP_PATTERN_1,
    TOX_BOX_BP_PATTERN_2,
    TOX_BOX_BP_PATTERN_3
};

enum oActionsToxBox {
    TOX_BOX_ACT_END = -1,
    TOX_BOX_ACT_INIT,
    TOX_BOX_ACT_STEP,
    TOX_BOX_ACT_WAIT,
    TOX_BOX_ACT_MOVE_FORWARD,
    TOX_BOX_ACT_MOVE_BACKWARD,
    TOX_BOX_ACT_MOVE_DOWN,
    TOX_BOX_ACT_MOVE_UP
};

/* Penguins (general) */
enum PenguinWalkingSounds {
    PENGUIN_SOUND_WALK_BABY,
    PENGUIN_SOUND_WALK_BIG
};
enum oAnimStatesPenguin { // geo_switch_tuxie_mother_eyes
    PENGUIN_ANIM_STATE_EYES_OPEN,
    PENGUIN_ANIM_STATE_EYES_HALF_CLOSED,
    PENGUIN_ANIM_STATE_EYES_CLOSED,
    PENGUIN_ANIM_STATE_EYES_ANGRY,
    PENGUIN_ANIM_STATE_EYES_SAD
};
enum animIDsPenguin {
    PENGUIN_ANIM_WALK,
    PENGUIN_ANIM_DIVE_SLIDE,
    PENGUIN_ANIM_STAND_UP,
    PENGUIN_ANIM_IDLE
};

/* Racing Penguin */
    /* oBehParams2ndByte */
    #define RACING_PENGUIN_BP_NORMAL                        0x0
    #define RACING_PENGUIN_BP_120_STARS                     0x1
    /* oAction */
    #define RACING_PENGUIN_ACT_WAIT_FOR_MARIO               0x0
    #define RACING_PENGUIN_ACT_SHOW_INIT_TEXT               0x1
    #define RACING_PENGUIN_ACT_PREPARE_FOR_RACE             0x2
    #define RACING_PENGUIN_ACT_RACE                         0x3
    #define RACING_PENGUIN_ACT_FINISH_RACE                  0x4
    #define RACING_PENGUIN_ACT_SHOW_FINAL_TEXT              0x5

/* Mother Penguin */
    /* oAction */
    #define MOTHER_PENGUIN_ACT_IDLE                         0x0
    #define MOTHER_PENGUIN_ACT_RECEIVE_BABY                 0x1
    #define MOTHER_PENGUIN_ACT_RECEIVED_BABY                0x2
    /* oSubAction */
        /* MOTHER_PENGUIN_ACT_IDLE */
    #define MOTHER_PENGUIN_SUB_ACT_READY_TO_ASK             0x0
    #define MOTHER_PENGUIN_SUB_ACT_ASK_FOR_BABY             0x1
    #define MOTHER_PENGUIN_SUB_ACT_ALREADY_ASKED            0x2
        /* MOTHER_PENGUIN_ACT_RECEIVE_BABY */
    #define MOTHER_PENGUIN_SUB_ACT_RECEIVE_BABY             0x0
    #define MOTHER_PENGUIN_SUB_ACT_CORRECT_BABY             0x1
    #define MOTHER_PENGUIN_SUB_ACT_WRONG_BABY               0x2
        /* MOTHER_PENGUIN_ACT_RECEIVED_BABY */
    #define MOTHER_PENGUIN_SUB_ACT_CHASE_MARIO              0x0
    #define MOTHER_PENGUIN_SUB_ACT_STOP_CHASING_MARIO       0x1

/* Small Penguin */
    /* oAction */
    #define SMALL_PENGUIN_ACT_WALKING                       0x0
    #define SMALL_PENGUIN_ACT_WALKING_TOWARD_MARIO          0x1
    #define SMALL_PENGUIN_ACT_WALKING_AWAY_FROM_MARIO       0x2
    #define SMALL_PENGUIN_ACT_DIVE_SLIDING                  0x3
    #define SMALL_PENGUIN_ACT_DIVE_SLIDING_STOP             0x4
    #define SMALL_PENGUIN_ACT_NEAR_MOTHER                   0x5

/* SL walking Penguin */
    /* oAction */
    #define SL_WALKING_PENGUIN_ACT_MOVING_FORWARDS          0x0
    #define SL_WALKING_PENGUIN_ACT_TURNING_BACK             0x1
    #define SL_WALKING_PENGUIN_ACT_RETURNING                0x2
    #define SL_WALKING_PENGUIN_ACT_TURNING_FORWARDS         0x3

/* Snowman wind */
    /* oSubAction */
    #define SL_SNOWMAN_WIND_ACT_IDLE                        0x0
    #define SL_SNOWMAN_WIND_ACT_TALKING                     0x1
    #define SL_SNOWMAN_WIND_ACT_BLOWING                     0x2

/* Snow Mound */
enum oActionsSnowMound {
    SNOW_MOUND_ACT_MOVE,
    SNOW_MOUND_ACT_SINK,
};

/* Snowman's Head */
enum oActionsSnowmansHead {
    SNOWMANS_HEAD_ACT_ASK,
    SNOWMANS_HEAD_ACT_NONE,
    SNOWMANS_HEAD_ACT_JUMPING,
    SNOWMANS_HEAD_ACT_LAND,
    SNOWMANS_HEAD_ACT_THANK,
};

/* Snowman's Bottom */
enum oActionsSnowmansBottom {
    SNOWMANS_BOTTOM_ACT_WAITING,
    SNOWMANS_BOTTOM_ACT_FOLLOW_PATH,
    SNOWMANS_BOTTOM_ACT_FINAL_STRETCH,
    SNOWMANS_BOTTOM_ACT_REACH_END,
    SNOWMANS_BOTTOM_ACT_COLLISION,
};

/* Water Bomb Cannon */
enum oBehParams2ndByteWaterBombCannon {
    WATER_BOMB_CANNON_BP_ACTIVE = 0x0,
};
enum oActionsWaterBombCannon {
    WATER_BOMB_CANNON_ACT_HIDDEN,
    WATER_BOMB_CANNON_ACT_ACTIVE,
    WATER_BOMB_CANNON_ACT_HIDE,
};

/* Water bomb */
enum oActionsWaterBomb {
    WATER_BOMB_ACT_SHOT_FROM_CANNON,
    WATER_BOMB_ACT_INIT,
    WATER_BOMB_ACT_DROP,
    WATER_BOMB_ACT_EXPLODE,
};

/* TTC Painting Clock Arm */
enum oActionsTTCPaintingClockArm {
    TTC_PAINTING_CLOCK_ARM_WAIT,
    TTC_PAINTING_CLOCK_ARM_ACT_MOVING,
    TTC_PAINTING_CLOCK_ARM_ACT_STOPPED,
};

/* TTC rotating solid */
enum oBehParams2ndByteTTCRotatingSolid {
    TTC_ROTATING_SOLID_BP_CUBE,
    TTC_ROTATING_SOLID_BP_TRIANGULAR_PRISM,
};

/* TTC moving bar */
enum oActionsTTCMovingBar {
    TTC_MOVING_BAR_ACT_WAIT,
    TTC_MOVING_BAR_ACT_PULL_BACK,
    TTC_MOVING_BAR_ACT_EXTEND,
    TTC_MOVING_BAR_ACT_RETRACT,
};

/* TTC cog */
enum oBehParams2ndByteTTCCog {
    TTC_COG_BP_SHAPE_MASK     = 0x02,
    TTC_COG_BP_SHAPE_HEXAGON  = (0 << 1),
    TTC_COG_BP_SHAPE_TRIANGLE = (1 << 1),
    TTC_COG_BP_DIR_MASK       = 0x01,
    TTC_COG_BP_DIR_CCW        = (0 << 0), // TODO: Check these
    TTC_COG_BP_DIR_CW         = (1 << 0),
};

/* TTC Pit Block */
enum oBehParams2ndByteTTCPitBlock {
    TTC_PIT_BLOCK_BP_0,
    TTC_PIT_BLOCK_BP_1,
};

/* TTC 2D Rotator */
enum oBehParams2ndByteTTC2DRotator {
    TTC_2D_ROTATOR_BP_HAND,
    TTC_2D_ROTATOR_BP_2D_COG,
};

/* TTC Treadmill */
enum oBehParams2ndByteTTCTreadmill {
    TREADMILL_BP_LARGE,
    TREADMILL_BP_SMALL,
    TREADMILL_BP_SIZE_MASK = 0x1,
    TREADMILL_BP_UNKNOWN,
};

/* Activated Back-and-Forth Platform */
    /* oBehParams1stByte */
    /* (bparam1 & 0x03) aka platform type */
    #define ACTIVATED_BF_PLAT_TYPE_BITS_ARROW_PLAT          0x0
    #define ACTIVATED_BF_PLAT_TYPE_BITFS_MESH_PLAT          0x1
    #define ACTIVATED_BF_PLAT_TYPE_BITFS_ELEVATOR           0x2
    #define ACTIVATED_BF_PLAT_TYPES_MASK                    0x3
    /* oBehParams2ndByte */
    #define ACTIVATED_BF_PLAT_DISTANCE_MASK                 0x7F
    #define ACTIVATED_BF_PLAT_FLAG_VERTICAL                 BIT(7)

/* Unagi */
    /* oBehParams2ndByte */
    #define UNAGI_BP_IN_SHIP                                0x0
    #define UNAGI_BP_IN_CAVE                                0x1
    #define UNAGI_BP_START_SWIMMING                         0x2
    /* oAction */
    #define UNAGI_ACT_SHIP_RESET_PATH                       0x0
    #define UNAGI_ACT_SHIP_PATH                             0x1
    #define UNAGI_ACT_RETURN_TO_CAVE                        0x2
    #define UNAGI_ACT_IN_CAVE                               0x3
    #define UNAGI_ACT_CAVE_PATH                             0x4
    /* oSubAction */
        /* UNAGI_ACT_SHIP_RESET_PATH */
    #define UNAGI_SUB_ACT_SHIP_RESET_PATH_WAIT_FOR_MARIO    0x0
    #define UNAGI_SUB_ACT_SHIP_RESET_PATH_DO_RESET          0x1
    /* oAnimState */
    #define UNAGI_ANIM_STATE_NO_STAR                        0x0
    #define UNAGI_ANIM_STATE_HAS_STAR                       0x1
    #define UNAGI_ANIM_STATE_HAS_TRANSPARENT_STAR           0x2
    /* Animations */
    #define UNAGI_ANIM_YAWN                                 0x0
    #define UNAGI_ANIM_BITE                                 0x1
    #define UNAGI_ANIM_SWIM                                 0x2
    #define UNAGI_ANIM_STATIC_STRAIGHT                      0x3
    #define UNAGI_ANIM_IDLE_2_1                             0x4
    #define UNAGI_ANIM_OPEN_MOUTH                           0x5
    #define UNAGI_ANIM_IDLE_2                               0x6

/* Unagi Sub Object */
    /* oBehParams2ndByte */
    #define UNAGI_PART_BP_BACK                             -0x4
    #define UNAGI_PART_BP_CONTROL_DISTANCE                  0x3
    #define UNAGI_PART_BP_FRONT                             0x4

/* Dorrie */
    /* oAction */
    #define DORRIE_ACT_MOVE                                 0x0
    #define DORRIE_ACT_LOWER_HEAD                           0x1
    #define DORRIE_ACT_RAISE_HEAD                           0x2
    /* Animations */
    #define DORRIE_ANIM_UNUSED                              0x0
    #define DORRIE_ANIM_RAISE_HEAD                          0x1
    #define DORRIE_ANIM_LOWER_HEAD                          0x2

/* Mad piano */
    /* oAction */
    #define MAD_PIANO_ACT_WAIT                              0x0
    #define MAD_PIANO_ACT_ATTACK                            0x1
    /* Animations */
    #define MAD_PIANO_ANIM_SLEEPING                         0x0
    #define MAD_PIANO_ANIM_CHOMPING                         0x1

/* Haunted Chair */
    /* oAction */
    #define HAUNTED_CHAIR_ACT_FALL_OR_SPIN                  0x0
    #define HAUNTED_CHAIR_ACT_FLY                           0x1
    /* Animations */
    #define HAUNTED_CHAIR_ANIM_DEFAULT                      0x0

/* Fire Piranha Plant */
enum oBehParam2ndByteFirePiranhaPlant {
    FIRE_PIRANHA_PLANT_BP_NORMAL,
    FIRE_PIRANHA_PLANT_BP_THI,
};
enum oActionsFirePiranhaPlant {
    FIRE_PIRANHA_PLANT_ACT_HIDE,
    FIRE_PIRANHA_PLANT_ACT_GROW,
};
enum animIDsFirePiranhaPlant {
    FIRE_PIRANHA_PLANT_ANIM_SHRINK,
    FIRE_PIRANHA_PLANT_ANIM_UNUSED_1,
    FIRE_PIRANHA_PLANT_ANIM_ATTACKED,
    FIRE_PIRANHA_PLANT_ANIM_UNUSED_3,
    FIRE_PIRANHA_PLANT_ANIM_GROW,
};

/* Fire Spitter */
    /* oAction */
    #define FIRE_SPITTER_ACT_IDLE                           0x0
    #define FIRE_SPITTER_ACT_SPIT_FIRE                      0x1

/* Moving Flame */
    /* oBehParams2ndByte */
    #define MOVING_FLAME_BP_1FRAME                          0x0
    #define MOVING_FLAME_BP_MOVE                            0x1

/* Fly Guy Flame */
    /* oBehParams2ndByte */
    #define MOVING_FLAME_PARTICLE_BP_UNK1                   0x1

/* Flamethrower */
    /* oBehParams2ndByte */
    #define FLAMETHROWER_BP_0                               0x0
    #define FLAMETHROWER_BP_BLUE                            0x1
    #define FLAMETHROWER_BP_SLOW                            0x2
    #define FLAMETHROWER_BP_TALL_HITBOX                     0x3
    #define FLAMETHROWER_BP_UPWARDS                         0x4
    /* oAction */
    #define FLAMETHROWER_ACT_IDLE                           0x0
    #define FLAMETHROWER_ACT_BLOW_FIRE                      0x1
    #define FLAMETHROWER_ACT_COOLDOWN                       0x2

/* Bouncing Fireball Flame */
    /* oAction */
    #define BOUNCING_FLAME_ACT_SPAWNED                      0x0
    #define BOUNCING_FLAME_ACT_LANDED                       0x1

/* Bouncing Fireball */
    /* oAction */
    #define BOUNCING_FIREBALL_SPAWNER_ACT_IDLE              0x0
    #define BOUNCING_FIREBALL_SPAWNER_ACT_SPAWN_FLAME       0x1
    #define BOUNCING_FIREBALL_SPAWNER_ACT_COOLDOWN          0x2

/* Eyerok boss */
    /* oAction */
    #define EYEROK_BOSS_ACT_SLEEP                           0x0
    #define EYEROK_BOSS_ACT_WAKE_UP                         0x1
    #define EYEROK_BOSS_ACT_SHOW_INTRO_TEXT                 0x2
    #define EYEROK_BOSS_ACT_FIGHT                           0x3
    #define EYEROK_BOSS_ACT_DIE                             0x4
    /* oSubAction */
        /* EYEROK_BOSS_ACT_WAKE_UP */
    #define EYEROK_BOSS_SUB_ACT_WAKE_LOWER_VOLUME           0x0
    #define EYEROK_BOSS_SUB_ACT_WAKE_WAIT_FOR_DIALOG        0x1

/* Eyerok hand */
    /* oBehParams2ndByte */
    #define EYEROK_BP_LEFT_HAND                            -0x1
    #define EYEROK_BP_RIGHT_HAND                            0x1
    /* oAction */
    #define EYEROK_HAND_ACT_SLEEP                           0x0
    #define EYEROK_HAND_ACT_IDLE                            0x1
    #define EYEROK_HAND_ACT_OPEN                            0x2
    #define EYEROK_HAND_ACT_SHOW_EYE                        0x3
    #define EYEROK_HAND_ACT_CLOSE                           0x4
    #define EYEROK_HAND_ACT_RETREAT                         0x5
    #define EYEROK_HAND_ACT_TARGET_MARIO                    0x6
    #define EYEROK_HAND_ACT_SMASH                           0x7
    #define EYEROK_HAND_ACT_FIST_PUSH                       0x8
    #define EYEROK_HAND_ACT_FIST_SWEEP                      0x9
    #define EYEROK_HAND_ACT_BEGIN_DOUBLE_POUND              0xA // raising for double smash
    #define EYEROK_HAND_ACT_DOUBLE_POUND                    0xB // double smashing
    #define EYEROK_HAND_ACT_ATTACKED                        0xC
    #define EYEROK_HAND_ACT_RECOVER                         0xD
    #define EYEROK_HAND_ACT_BECOME_ACTIVE                   0xE
    #define EYEROK_HAND_ACT_DIE                             0xF
    /* oAnimState */
    #define EYEROK_HAND_ANIM_STATE_EYE_OPEN                 0x0
    #define EYEROK_HAND_ANIM_STATE_EYE_MOSTLY_OPEN          0x1
    #define EYEROK_HAND_ANIM_STATE_EYE_MOSTLY_CLOSED        0x2
    #define EYEROK_HAND_ANIM_STATE_EYE_CLOSED               0x3
    /* oEyerokHandAnimStateIndex */
    #define EYEROK_HAND_ANIM_STATE_INDEX_EYE_OPEN_1         0x0
    #define EYEROK_HAND_ANIM_STATE_INDEX_EYE_CLOSING        0x1 // mostly open
    #define EYEROK_HAND_ANIM_STATE_INDEX_EYE_CLOSED         0x2
    #define EYEROK_HAND_ANIM_STATE_INDEX_EYE_OPENING_1      0x3 // mostly closed
    #define EYEROK_HAND_ANIM_STATE_INDEX_EYE_OPENING_2      0x4 // mostly open
    #define EYEROK_HAND_ANIM_STATE_INDEX_EYE_OPEN_2         0x5
    /* Animations */
    #define EYEROK_HAND_ANIM_RECOVER                        0x0
    #define EYEROK_HAND_ANIM_DEATH                          0x1
    #define EYEROK_HAND_ANIM_IDLE                           0x2
    #define EYEROK_HAND_ANIM_ATTACKED                       0x3
    #define EYEROK_HAND_ANIM_OPEN                           0x4
    #define EYEROK_HAND_ANIM_SHOW_EYE                       0x5
    #define EYEROK_HAND_ANIM_SLEEPING                       0x6
    #define EYEROK_HAND_ANIM_CLOSE                          0x7

/* King Bobomb */
    /* oAction */
    #define KING_BOBOMB_ACT_INACTIVE                        0x0
    #define KING_BOBOMB_ACT_ACTIVATE                        0x1
    #define KING_BOBOMB_ACT_ACTIVE                          0x2
    #define KING_BOBOMB_ACT_GRABBED_MARIO                   0x3
    #define KING_BOBOMB_ACT_BEEN_THROWN                     0x4
    #define KING_BOBOMB_ACT_RETURN_HOME                     0x5
    #define KING_BOBOMB_ACT_HIT_GROUND                      0x6
    #define KING_BOBOMB_ACT_DEATH                           0x7
    #define KING_BOBOMB_ACT_STOP_MUSIC                      0x8
    /* oSubAction */
        /* KING_BOBOMB_ACT_INACTIVE */
    #define KING_BOBOMB_SUB_ACT_INACTIVE_INIT               0x0
    #define KING_BOBOMB_SUB_ACT_INACTIVE_DIALOG             0x1
        /* KING_BOBOMB_ACT_GRABBED_MARIO */
    #define KING_BOBOMB_SUB_ACT_GRABBED_MARIO_GRAB          0x0
    #define KING_BOBOMB_SUB_ACT_GRABBED_MARIO_HOLDING       0x1
    #define KING_BOBOMB_SUB_ACT_GRABBED_MARIO_THROW         0x2
        /* KING_BOBOMB_ACT_BEEN_THROWN */
    #define KING_BOBOMB_SUB_ACT_THROWN_FALL                 0x0
    #define KING_BOBOMB_SUB_ACT_THROWN_STAND_UP             0x1
    #define KING_BOBOMB_SUB_ACT_THROWN_END                  0x2
        /* KING_BOBOMB_ACT_RETURN_HOME */
    #define KING_BOBOMB_SUB_ACT_RETURN_HOME_JUMP            0x0
    #define KING_BOBOMB_SUB_ACT_RETURN_HOME_LANDING         0x1
    #define KING_BOBOMB_SUB_ACT_RETURN_HOME_LANDING_END     0x2
    #define KING_BOBOMB_SUB_ACT_RETURN_HOME_WAIT_FOR_DIALOG 0x3
    #define KING_BOBOMB_SUB_ACT_RETURN_HOME_DIALOG          0x4
        /* KING_BOBOMB_ACT_HIT_GROUND */
    #define KING_BOBOMB_SUB_ACT_HIT_GROUND_HIT              0x0
    #define KING_BOBOMB_SUB_ACT_HIT_GROUND_STAND_UP         0x1
    #define KING_BOBOMB_SUB_ACT_HIT_GROUND_START_WALKING    0x2
    /* Animations */
    #define KING_BOBOMB_ANIM_GRAB_MARIO                     0x0
    #define KING_BOBOMB_ANIM_HOLDING_MARIO                  0x1
    #define KING_BOBOMB_ANIM_HIT_GROUND                     0x2
    #define KING_BOBOMB_ANIM_UNUSED_3                       0x3
    #define KING_BOBOMB_ANIM_STOMP                          0x4
    #define KING_BOBOMB_ANIM_IDLE                           0x5
    #define KING_BOBOMB_ANIM_HELD                           0x6
    #define KING_BOBOMB_ANIM_T_POSE                         0x7
    #define KING_BOBOMB_ANIM_JUMP                           0x8
    #define KING_BOBOMB_ANIM_THROW_MARIO                    0x9
    #define KING_BOBOMB_ANIM_STAND_UP                       0xA
    #define KING_BOBOMB_ANIM_WALKING                        0xB

/* Chuckya */
    /* oAction */
    #define CHUCKYA_ACT_MOVING                              0x0
    #define CHUCKYA_ACT_GRABBED_MARIO                       0x1
    #define CHUCKYA_ACT_THROWN                              0x2
    #define CHUCKYA_ACT_RELEASE_MARIO                       0x3
    /* oSubAction */
        /* CHUCKYA_ACT_MOVING */
    #define CHUCKYA_SUB_ACT_TURN_TOWARD_MARIO               0x0
    #define CHUCKYA_SUB_ACT_ACCELERATE                      0x1
    #define CHUCKYA_SUB_ACT_STOP                            0x2
    #define CHUCKYA_SUB_ACT_TURN_TOWARD_HOME                0x3
        /* CHUCKYA_ACT_GRABBED_MARIO */
    #define CHUCKYA_SUB_ACT_GRAB_MARIO                      0x0
    #define CHUCKYA_SUB_ACT_HOLD_MARIO                      0x1
    #define CHUCKYA_SUB_ACT_THROW_MARIO                     0x2
    /* oCommonAnchorAction */
    #define COMMON_ANCHOR_ACT_INACTIVE                      0x0
    #define COMMON_ANCHOR_ACT_SET_MARIO_GFX_TO_POS          0x1
    #define COMMON_ANCHOR_ACT_THROW_MARIO                   0x2
    #define COMMON_ANCHOR_ACT_DROP_MARIO                    0x3
    /* Animations */
    #define CHUCKYA_ANIM_GRAB_MARIO                         0x0
    #define CHUCKYA_ANIM_THROW_1                            0x1
    #define CHUCKYA_ANIM_HELD                               0x2
    #define CHUCKYA_ANIM_THROW_2                            0x3
    #define CHUCKYA_ANIM_IDLE                               0x4
    #define CHUCKYA_ANIM_SPAWN                              0x5

/* Heave Ho */
    /* oAction */
    #define HEAVE_HO_ACT_INACTIVE                           0x0
    #define HEAVE_HO_ACT_WINDING_UP                         0x1
    #define HEAVE_HO_ACT_MOVING                             0x2
    #define HEAVE_HO_ACT_THROW_MARIO                        0x3
    /* Animations */
    #define HEAVE_HO_ANIM_MOVING                            0x0
    #define HEAVE_HO_ANIM_THROW                             0x1
    #define HEAVE_HO_ANIM_WINDING_UP                        0x2

/* Klepto */
    /* oBehParams2ndByte */
    #define KLEPTO_BP_NO_STAR                               0x0
    #define KLEPTO_BP_HAS_STAR                              0x1
    /* oAction */
    #define KLEPTO_ACT_CIRCLE_TARGET_HOLDING                0x0
    #define KLEPTO_ACT_APPROACH_TARGET_HOLDING              0x1
    #define KLEPTO_ACT_WAIT_FOR_MARIO                       0x2
    #define KLEPTO_ACT_TURN_TOWARD_MARIO                    0x3
    #define KLEPTO_ACT_DIVE_AT_MARIO                        0x4
    #define KLEPTO_ACT_RESET_POSITION                       0x5
    #define KLEPTO_ACT_STRUCK_BY_MARIO                      0x6
    #define KLEPTO_ACT_RETREAT                              0x7
    /* oSubAction */
        /* KLEPTO_ACT_DIVE_AT_MARIO */
    #define KLEPTO_SUB_ACT_DIVE_TURN_PITCH                  0x0
    #define KLEPTO_SUB_ACT_DIVE_STOP                        0x1
    /* oAnimState */
    #define KLEPTO_ANIM_STATE_HOLDING_NOTHING               0x0
    #define KLEPTO_ANIM_STATE_HOLDING_CAP                   0x1
    #define KLEPTO_ANIM_STATE_HOLDING_STAR                  0x2
    #define KLEPTO_ANIM_STATE_HOLDING_TRANSPARENT_STAR      0x3
    /* Animations */
    #define KLEPTO_ANIM_DIVE_0                              0x0
    #define KLEPTO_ANIM_STRUCK_BY_MARIO                     0x1
    #define KLEPTO_ANIM_DIVE_AT_MARIO_2                     0x2
    #define KLEPTO_ANIM_DIVE_AT_MARIO_3                     0x3
    #define KLEPTO_ANIM_DIVE_AT_MARIO_4                     0x4
    #define KLEPTO_ANIM_DIVE_FLAP_5                         0x5
    #define KLEPTO_ANIM_DIVE_FLAP_6                         0x6

/* Bird */
    /* oBehParams2ndByte */
    #define BIRD_BP_SPAWNED                                 0x0
    #define BIRD_BP_SPAWNER                                 0x1
    /* oAction */
    #define BIRD_ACT_INACTIVE                               0x0
    #define BIRD_ACT_FLY                                    0x1
    /* Animation */
    #define BIRD_ANIM_FLY                                   0x0

/* End Birds */
    /* oAction */
    #define END_BIRDS_ACT_INIT                              0x0
    #define END_BIRDS_ACT_ACTIVE                            0x1
    /* Animations */
    #define END_BIRDS_ANIM_FLY                              0x0

/* Birds Sound */
    /* oAction */
    #define SOUND_BIRDS_BP_OBJ2_BIRD_CHIRP1                 0x0
    #define SOUND_BIRDS_BP_GENERAL2_BIRD_CHIRP2             0x1
    #define SOUND_BIRDS_BP_OBJ_BIRD_CHIRP3                  0x2

/* Scuttlebug Spawner */
    /* oAction */
    #define SCUTTLEBUG_SPAWNER_ACT_ACTIVE                   0x0
    #define SCUTTLEBUG_SPAWNER_ACT_INACTIVE                 0x1

/* Scuttlebug */
    /* oSubAction */
    #define SCUTTLEBUG_SUB_ACT_RESET                        0x0
    #define SCUTTLEBUG_SUB_ACT_MOVING                       0x1
    #define SCUTTLEBUG_SUB_ACT_HIT_WALL                     0x2
    #define SCUTTLEBUG_SUB_ACT_ALERT                        0x3
    #define SCUTTLEBUG_SUB_ACT_JUMP                         0x4
    #define SCUTTLEBUG_SUB_ACT_LAND                         0x5
    /* Animations */
    #define SCUTTLEBUG_ANIM_JUMP                            0x0
    #define SCUTTLEBUG_ANIM_WALK                            0x1

/* Skeeter */
    /* oAction */
    #define SKEETER_ACT_IDLE                                0x0
    #define SKEETER_ACT_LUNGE                               0x1
    #define SKEETER_ACT_WALK                                0x2
    /* Animations */
    #define SKEETER_ANIM_WATER_LUNGE                        0x0
    #define SKEETER_ANIM_WATER_IDLE                         0x1
    #define SKEETER_ANIM_WALK                               0x2
    #define SKEETER_ANIM_IDLE                               0x3

/* Snufit */
    /* oAction */
    #define SNUFIT_ACT_IDLE                                 0x0
    #define SNUFIT_ACT_SHOOT                                0x1

/* Snufit Balls (gottem) */
    /* oAction */
    #define SNUFIT_BALL_ACT_MOVE                            0x0
    #define SNUFIT_BALL_ACT_HIT_MARIO                       0x1

/* Tweester */
    /* oAction */
    #define TWEESTER_ACT_IDLE                               0x0
    #define TWEESTER_ACT_CHASE                              0x1
    #define TWEESTER_ACT_HIDE                               0x2
    /* oSubAction */
        /* TWEESTER_ACT_IDLE */
    #define TWEESTER_SUB_ACT_WAIT                           0x0
    #define TWEESTER_SUB_ACT_GROW                           0x1
        /* TWEESTER_ACT_CHASE */
    #define TWEESTER_SUB_ACT_CHASE_MARIO                    0x0
    #define TWEESTER_SUB_ACT_CHASE_HOME                     0x1

/* Triplet butterfly */
    /* oBehParams2ndByte */
    #define TRIPLET_BUTTERFLY_BP_0                          0x0
    #define TRIPLET_BUTTERFLY_BP_BUTTERFLY_NUM              0x3
    #define TRIPLET_BUTTERFLY_BP_NO_BOMBS                   0x4
    /* oAction */
    #define TRIPLET_BUTTERFLY_ACT_INIT                      0x0
    #define TRIPLET_BUTTERFLY_ACT_WANDER                    0x1
    #define TRIPLET_BUTTERFLY_ACT_ACTIVATE                  0x2
    #define TRIPLET_BUTTERFLY_ACT_EXPLODE                   0x3
    /* oTripletButterflyType */
    #define TRIPLET_BUTTERFLY_TYPE_NORMAL                  -0x1
    #define TRIPLET_BUTTERFLY_TYPE_EXPLODES                 0x0
    #define TRIPLET_BUTTERFLY_TYPE_SPAWN_1UP                0x1


/* Changing Water Level */
    /* oAction */
    #define WATER_LEVEL_ACT_INIT                            0x0
    #define WATER_LEVEL_ACT_IDLE                            0x1

/* Water Level Diamond */
    /* oAction */
    // Loading
    #define WATER_LEVEL_DIAMOND_ACT_INIT                    0x0
    // Idling when Mario isn't inside its hitbox
    #define WATER_LEVEL_DIAMOND_ACT_IDLE                    0x1
    // While the water level is changing
    #define WATER_LEVEL_DIAMOND_ACT_CHANGE_WATER_LEVEL      0x2
    // After the water level has changed but Mario hasn't left its hitbox yet
    #define WATER_LEVEL_DIAMOND_ACT_IDLE_SPINNING           0x3

/* Castle Water Level Pillars */
    /* oAction */
    #define WATER_PILLAR_ACT_UNPOUNDED_IDLE                 0x0
    #define WATER_PILLAR_ACT_LOWER_SELF                     0x1
    #define WATER_PILLAR_ACT_POUNDED_1                      0x2
    #define WATER_PILLAR_ACT_POUNDED_2                      0x3
    #define WATER_PILLAR_ACT_DRAIN_WATER                    0x4
    #define WATER_PILLAR_ACT_END                            0x5

/* Mips */
    /* oBehParams2ndByte */
    #define MIPS_BP_STAR_1                                  0x0
    #define MIPS_BP_STAR_2                                  0x1
    /* oAction */
    #define MIPS_ACT_WAIT_FOR_NEARBY_MARIO                  0x0
    #define MIPS_ACT_FOLLOW_PATH                            0x1
    #define MIPS_ACT_WAIT_FOR_ANIMATION_DONE                0x2
    #define MIPS_ACT_FALL_DOWN                              0x3
    #define MIPS_ACT_IDLE                                   0x4
    /* oMipsStarStatus */
    #define MIPS_STAR_STATUS_HAVENT_SPAWNED_STAR            0x0
    #define MIPS_STAR_STATUS_SHOULD_SPAWN_STAR              0x1
    #define MIPS_STAR_STATUS_ALREADY_SPAWNED_STAR           0x2
    /* Animations */
    #define MIPS_ANIM_IDLE                                  0x0
    #define MIPS_ANIM_HOPPING                               0x1
    #define MIPS_ANIM_THROWN                                0x2
    #define MIPS_ANIM_UNUSED                                0x3
    #define MIPS_ANIM_HELD                                  0x4

/* Falling Pillar */
    /* oAction */
    #define FALLING_PILLAR_ACT_IDLE                         0x0
    #define FALLING_PILLAR_ACT_TURNING                      0x1
    #define FALLING_PILLAR_ACT_FALLING                      0x2

/* Bowser Puzzle */
    /* oAction */
    #define BOWSER_PUZZLE_ACT_SPAWN_PIECES                  0x0
    #define BOWSER_PUZZLE_ACT_WAIT_FOR_COMPLETE             0x1
    #define BOWSER_PUZZLE_ACT_DONE                          0x2
    /* oBowserPuzzleCompletionFlags */
    #define BOWSER_PUZZLE_COMPLETION_FLAGS_NONE             0x0
    #define BOWSER_PUZZLE_COMPLETION_FLAG_MARIO_ON_PLATFORM 0x1
    #define BOWSER_PUZZLE_COMPLETION_FLAG_PUZZLE_COMPLETE   0x2

/* Bowser Puzzle Piece */
    /* oAction */
    #define BOWSER_PUZZLE_PIECE_ACT_IDLE                    0x0
    #define BOWSER_PUZZLE_PIECE_ACT_LEFT                    0x1
    #define BOWSER_PUZZLE_PIECE_ACT_RIGHT                   0x2
    #define BOWSER_PUZZLE_PIECE_ACT_UP                      0x3
    #define BOWSER_PUZZLE_PIECE_ACT_DOWN                    0x4

/* Spindrift */
    /* oAction */
    #define SPINDRIFT_ACT_ACTIVE                            0x0
    #define SPINDRIFT_ACT_HIT_MARIO                         0x1
    /* oAction */
    #define SPINDRIFT_ANIM_DEFAULT                          0x0

/* Mr Blizzard */
    /* oBehParams2ndByte */
    #define MR_BLIZZARD_STYPE_NO_CAP                        0x0
    #define MR_BLIZZARD_STYPE_JUMPING                       0x1
    /* oAction */
    #define MR_BLIZZARD_ACT_SPAWN_SNOWBALL                  0x0
    #define MR_BLIZZARD_ACT_HIDE_UNHIDE                     0x1
    #define MR_BLIZZARD_ACT_RISE_FROM_GROUND                0x2
    #define MR_BLIZZARD_ACT_ROTATE                          0x3
    #define MR_BLIZZARD_ACT_THROW_SNOWBALL                  0x4
    #define MR_BLIZZARD_ACT_BURROW                          0x5
    #define MR_BLIZZARD_ACT_DEATH                           0x6
    #define MR_BLIZZARD_ACT_JUMP                            0x7
    /* oAnimState */
    #define MR_BLIZZARD_ANIM_STATE_NO_CAP                   0x0
    #define MR_BLIZZARD_ANIM_STATE_HAS_CAP                  0x1
    /* Animations */
    #define MR_BLIZZARD_ANIM_SPAWN_SNOWBALL                 0x0
    #define MR_BLIZZARD_ANIM_THROW_SNOWBALL                 0x1

/* Mr Blizzard Snowball */
    /* oAction */
    #define MR_BLIZZARD_SNOWBALL_ACT_INIT                   0x0
    #define MR_BLIZZARD_SNOWBALL_ACT_LAUNCH                 0x1
    #define MR_BLIZZARD_SNOWBALL_ACT_COLLISION              0x2

/* Mr I */
    /* oBehParams2ndByte */
    #define MR_I_BP_NORMAL                                  0x0
    #define MR_I_BP_LARGE_WITH_STAR                         0x1
    /* oAction */
    #define MR_I_BODY_ACT_FAR_AWAY                          0x0
    #define MR_I_BODY_ACT_IDLE                              0x1
    #define MR_I_BODY_ACT_LOOKING_AT_MARIO                  0x2
    #define MR_I_BODY_ACT_SPIN_DEATH                        0x3

/* Mr I & Piranha Plant Particle */
    /* oAction */
    #define MR_I_PIRANHA_PARTICLE_ACT_MOVE                  0x0
    #define MR_I_PIRANHA_PARTICLE_ACT_INTERACTED            0x1

/* Bullet Bill */
    /* oAction */
    #define BULLET_BILL_ACT_RESET                           0x0
    #define BULLET_BILL_ACT_IDLE                            0x1
    #define BULLET_BILL_ACT_CHASING_MARIO                   0x2
    #define BULLET_BILL_ACT_HIT                             0x3

/* Thwomp & Grindel */
    /* oAction */
    #define GRINDEL_THWOMP_ACT_RISING                       0x0
    #define GRINDEL_THWOMP_ACT_FLOATING                     0x1
    #define GRINDEL_THWOMP_ACT_FALLING                      0x2
    #define GRINDEL_THWOMP_ACT_LAND                         0x3
    #define GRINDEL_THWOMP_ACT_ON_GROUND                    0x4

/* Whomp */
    /* oBehParams2ndByte */
    #define WHOMP_BP_NORMAL                                 0x0
    #define WHOMP_BP_KING                                   0x1
    /* oAction */
    #define WHOMP_ACT_INIT                                  0x0
    #define WHOMP_ACT_PATROL                                0x1
    #define WHOMP_ACT_KING_CHASE                            0x2
    #define WHOMP_ACT_PREPARE_JUMP                          0x3
    #define WHOMP_ACT_JUMP                                  0x4
    #define WHOMP_ACT_LAND                                  0x5
    #define WHOMP_ACT_ON_GROUND_GENERAL                     0x6
    #define WHOMP_ACT_TURN                                  0x7
    #define WHOMP_ACT_DIE                                   0x8
    #define WHOMP_ACT_STOP_BOSS_MUSIC                       0x9
    /* oSubAction */
        /* WHOMP_ACT_INIT */
    #define WHOMP_SUB_ACT_INIT_IDLE                         0x0
    #define WHOMP_SUB_ACT_INIT_DIALOG                       0x1
        /* WHOMP_ACT_LAND */
    #define WHOMP_SUB_ACT_LAND_EFFECTS                      0x0
    #define WHOMP_SUB_ACT_LAND_ON_GROUND                    0x1
        /* WHOMP_ACT_ON_GROUND_GENERAL */
    #define WHOMP_SUB_ACT_GROUND_LYING_DOWN                 0x0
    #define WHOMP_SUB_ACT_GROUND_PREPARE_STAND_UP           0x1
    #define WHOMP_SUB_ACT_GROUND_STAND_UP                   0xA
        /* WHOMP_ACT_TURN */
    #define WHOMP_SUB_ACT_TURN_TURNING                      0x0
    #define WHOMP_SUB_ACT_TURN_END                          0x1
    /* Animations */
    #define WHOMP_ANIM_WALK                                 0x0
    #define WHOMP_ANIM_JUMP                                 0x1

/* WF Kickable Board */
    /* oAction */
    #define KICKABLE_BOARD_ACT_IDLE_VERTICAL                0x0
    #define KICKABLE_BOARD_ACT_ROCKING                      0x1
    #define KICKABLE_BOARD_ACT_FALLING                      0x2
    #define KICKABLE_BOARD_ACT_IDLE_HORIZONTAL              0x3
    /* check_mario_attacking */
    #define WF_ATTACK_NONE                                  0x0
    #define WF_ATTACK_GROUND                                0x1
    #define WF_ATTACK_AIR                                   0x2

/* White Puff Explosion */
enum oBehParams2ndByteWhitePuffExplosion {
    WHITE_PUFF_EXPLODE_BP_FAST_FADE = 2,
    WHITE_PUFF_EXPLODE_BP_SLOW_FADE = 3,
};

/* Dirt Particle */
enum oAnimStatesTinyDirtParticle {
    TINY_DIRT_PARTICLE_ANIM_STATE_RED,
    TINY_DIRT_PARTICLE_ANIM_STATE_GREEN,
    TINY_DIRT_PARTICLE_ANIM_STATE_BLUE,
    TINY_DIRT_PARTICLE_ANIM_STATE_DIRT,
    TINY_DIRT_PARTICLE_ANIM_STATE_YELLOW,
    TINY_DIRT_PARTICLE_ANIM_STATE_BILLBOARD
};

/* Cartoon Star Particle */
enum oAnimStatesCartoonStarParticle {
    CARTOON_STAR_PARTICLE_ANIM_STATE_RED,
    CARTOON_STAR_PARTICLE_ANIM_STATE_GREEN,
    CARTOON_STAR_PARTICLE_ANIM_STATE_BLUE,
    CARTOON_STAR_PARTICLE_ANIM_STATE_YELLOW,
    CARTOON_STAR_PARTICLE_ANIM_STATE_BILLBOARD
};

/* Music Touch */
enum oActionsMusicTouch {
    MUSIC_TOUCH_ACT_PLAY_SOUND,
    MUSIC_TOUCH_ACT_DONE
};

/* Intro Scene */
enum gCutsceneObjSpawns {
    CUTSCENE_OBJ_NONE,
    CUTSCENE_OBJ_UNUSED_1,
    CUTSCENE_OBJ_UNUSED_2,
    CUTSCENE_OBJ_UNUSED_3,
    CUTSCENE_OBJ_UNUSED_4,
    CUTSCENE_OBJ_BEGINNING_PEACH,
    CUTSCENE_OBJ_BEGINNING_LAKITU,
    CUTSCENE_OBJ_7_END_BIRDS_1,
    CUTSCENE_OBJ_5_END_BIRDS_2,
    CUTSCENE_OBJ_2_END_BIRDS_1
};

#endif // OBJECT_CONSTANTS_H
