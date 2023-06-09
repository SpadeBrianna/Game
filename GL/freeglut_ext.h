#ifndef  __FREEGLUT_EXT_H__
#define  __FREEGLUT_EXT_H__

#ifdef __cplusplus
    extern "C" {
#endif
      
#define GLUT_KEY_NUM_LOCK           0x006D
#define GLUT_KEY_BEGIN              0x006E
#define GLUT_KEY_DELETE             0x006F
#define GLUT_KEY_SHIFT_L            0x0070
#define GLUT_KEY_SHIFT_R            0x0071
#define GLUT_KEY_CTRL_L             0x0072
#define GLUT_KEY_CTRL_R             0x0073
#define GLUT_KEY_ALT_L              0x0074
#define GLUT_KEY_ALT_R              0x0075
 
#define GLUT_ACTION_EXIT                         0
#define GLUT_ACTION_GLUTMAINLOOP_RETURNS         1
#define GLUT_ACTION_CONTINUE_EXECUTION           2
      
#define GLUT_CREATE_NEW_CONTEXT                  0
#define GLUT_USE_CURRENT_CONTEXT                 1

#define GLUT_FORCE_INDIRECT_CONTEXT              0
#define GLUT_ALLOW_DIRECT_CONTEXT                1
#define GLUT_TRY_DIRECT_CONTEXT                  2
#define GLUT_FORCE_DIRECT_CONTEXT                3
      
#define  GLUT_INIT_STATE                    0x007C

#define  GLUT_ACTION_ON_WINDOW_CLOSE        0x01F9

#define  GLUT_WINDOW_BORDER_WIDTH           0x01FA
#define  GLUT_WINDOW_BORDER_HEIGHT          0x01FB
#define  GLUT_WINDOW_HEADER_HEIGHT          0x01FB
     
#define  GLUT_VERSION                       0x01FC

#define  GLUT_RENDERING_CONTEXT             0x01FD
#define  GLUT_DIRECT_RENDERING              0x01FE

#define  GLUT_FULL_SCREEN                   0x01FF

#define  GLUT_SKIP_STALE_MOTION_EVENTS      0x0204

#define  GLUT_GEOMETRY_VISUALIZE_NORMALS    0x0205

#define  GLUT_STROKE_FONT_DRAW_JOIN_DOTS    0x0206 
      
#define  GLUT_AUX                           0x1000

#define  GLUT_AUX1                          0x1000
#define  GLUT_AUX2                          0x2000
#define  GLUT_AUX3                          0x4000
#define  GLUT_AUX4                          0x8000

#define  GLUT_INIT_MAJOR_VERSION            0x0200
#define  GLUT_INIT_MINOR_VERSION            0x0201
#define  GLUT_INIT_FLAGS                    0x0202
#define  GLUT_INIT_PROFILE                  0x0203
      
#define  GLUT_DEBUG                         0x0001
#define  GLUT_FORWARD_COMPATIBLE            0x0002
      
#define GLUT_CORE_PROFILE                   0x0001
#define	GLUT_COMPATIBILITY_PROFILE          0x0002

FGAPI void    FGAPIENTRY glutMainLoopEvent( void );
FGAPI void    FGAPIENTRY glutLeaveMainLoop( void );
FGAPI void    FGAPIENTRY glutExit         ( void );

FGAPI void    FGAPIENTRY glutFullScreenToggle( void );
FGAPI void    FGAPIENTRY glutLeaveFullScreen( void );
      
FGAPI void    FGAPIENTRY glutSetMenuFont( int menuID, void* font );
      
FGAPI void    FGAPIENTRY glutMouseWheelFunc( void (* callback)( int, int, int, int ) );
FGAPI void    FGAPIENTRY glutPositionFunc( void (* callback)( int, int ) );
FGAPI void    FGAPIENTRY glutCloseFunc( void (* callback)( void ) );
FGAPI void    FGAPIENTRY glutWMCloseFunc( void (* callback)( void ) );
      
FGAPI void    FGAPIENTRY glutMenuDestroyFunc( void (* callback)( void ) );

FGAPI void    FGAPIENTRY glutSetOption ( GLenum option_flag, int value );
FGAPI int *   FGAPIENTRY glutGetModeValues(GLenum mode, int * size);
      
FGAPI void*   FGAPIENTRY glutGetWindowData( void );
FGAPI void    FGAPIENTRY glutSetWindowData(void* data);
FGAPI void*   FGAPIENTRY glutGetMenuData( void );
FGAPI void    FGAPIENTRY glutSetMenuData(void* data);
      
FGAPI int     FGAPIENTRY glutBitmapHeight( void* font );
FGAPI GLfloat FGAPIENTRY glutStrokeHeight( void* font );
FGAPI void    FGAPIENTRY glutBitmapString( void* font, const unsigned char *string );
FGAPI void    FGAPIENTRY glutStrokeString( void* font, const unsigned char *string );
      
FGAPI void    FGAPIENTRY glutWireRhombicDodecahedron( void );
FGAPI void    FGAPIENTRY glutSolidRhombicDodecahedron( void );
FGAPI void    FGAPIENTRY glutWireSierpinskiSponge ( int num_levels, double offset[3], double scale );
FGAPI void    FGAPIENTRY glutSolidSierpinskiSponge ( int num_levels, double offset[3], double scale );
FGAPI void    FGAPIENTRY glutWireCylinder( double radius, double height, GLint slices, GLint stacks);
FGAPI void    FGAPIENTRY glutSolidCylinder( double radius, double height, GLint slices, GLint stacks);
      
FGAPI void    FGAPIENTRY glutWireTeacup( double size );
FGAPI void    FGAPIENTRY glutSolidTeacup( double size );
FGAPI void    FGAPIENTRY glutWireTeaspoon( double size );
FGAPI void    FGAPIENTRY glutSolidTeaspoon( double size );
      
typedef void (*GLUTproc)();
FGAPI GLUTproc FGAPIENTRY glutGetProcAddress( const char *procName );
      
#define GLUT_HAS_MULTI 1
      
FGAPI void FGAPIENTRY glutMultiEntryFunc( void (* callback)( int, int ) );
FGAPI void FGAPIENTRY glutMultiButtonFunc( void (* callback)( int, int, int, int, int ) );
FGAPI void FGAPIENTRY glutMultiMotionFunc( void (* callback)( int, int, int ) );
FGAPI void FGAPIENTRY glutMultiPassiveFunc( void (* callback)( int, int, int ) );
      
int     glutJoystickGetNumAxes( int ident );
int     glutJoystickGetNumButtons( int ident );
int     glutJoystickNotWorking( int ident );
float   glutJoystickGetDeadBand( int ident, int axis );
void    glutJoystickSetDeadBand( int ident, int axis, float db );
float   glutJoystickGetSaturation( int ident, int axis );
void    glutJoystickSetSaturation( int ident, int axis, float st );
void    glutJoystickSetMinRange( int ident, float *axes );
void    glutJoystickSetMaxRange( int ident, float *axes );
void    glutJoystickSetCenter( int ident, float *axes );
void    glutJoystickGetMinRange( int ident, float *axes );
void    glutJoystickGetMaxRange( int ident, float *axes );
void    glutJoystickGetCenter( int ident, float *axes );
      
#include <stdarg.h>
FGAPI void    FGAPIENTRY glutInitContextVersion( int majorVersion, int minorVersion );
FGAPI void    FGAPIENTRY glutInitContextFlags( int flags );
FGAPI void    FGAPIENTRY glutInitContextProfile( int profile );
FGAPI void    FGAPIENTRY glutInitErrorFunc( void (* callback)( const char *fmt, va_list ap ) );
FGAPI void    FGAPIENTRY glutInitWarningFunc( void (* callback)( const char *fmt, va_list ap ) );
      
FGAPI void    FGAPIENTRY glutSetVertexAttribCoord3(GLint attrib);
FGAPI void    FGAPIENTRY glutSetVertexAttribNormal(GLint attrib);
FGAPI void    FGAPIENTRY glutSetVertexAttribTexCoord2(GLint attrib);
      
FGAPI void    FGAPIENTRY glutInitContextFunc(void (* callback)());
FGAPI void    FGAPIENTRY glutAppStatusFunc(void (* callback)(int));
      
#define GLUT_APPSTATUS_PAUSE                0x0001
#define GLUT_APPSTATUS_RESUME               0x0002

#define  GLUT_CAPTIONLESS                   0x0400
#define  GLUT_BORDERLESS                    0x0800
#define  GLUT_SRGB                          0x1000
      
#ifdef __cplusplus
    }
#endif
