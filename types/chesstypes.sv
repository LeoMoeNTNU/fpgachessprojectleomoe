package chesstypes;


 function automatic logic [2:0] row(input logic [5:0] index);
        return index[5:3];
    endfunction

    function automatic logic [2:0] col(input logic [5:0] index);
        return index[2:0];
    endfunction

    function automatic logic [5:0] fullcoord(input logic [2:0]row, input logic [2:0] col);
            return {row,col};
    endfunction



typedef enum logic{
    BLACK, WHITE
} color_t;

typedef enum logic [2:0] {
    EMPTY  = 3'b000,
    PAWN   = 3'b001,
    KNIGHT = 3'b010,
    BISHOP = 3'b011,
    ROOK   = 3'b100,
    QUEEN  = 3'b101,
    KING   = 3'b110
} piece_t;



typedef struct packed {
    color_t color;
    piece_t piece;
} fullpiece_t;

typedef struct packed {
    fullpiece_t [63:0] board;
    logic [7:0] whitekingposition;
    logic [7:0] blackkingposition;
    color_t playing;
    logic enpassantlegal;
    logic [7:0] enpassantposition;
    logic [3:0]castlingallowed;
} state_t;

function automatic logic whiteleftcastlingallowed(input state_t state);
    return state.castlingallowed[0];
endfunction

function automatic logic whiterightcastlingallowed(input state_t state);
    return state.castlingallowed[1];
endfunction

function automatic logic blackleftcastlingallowed(input state_t state);
    return state.castlingallowed[2];
endfunction

function automatic logic blackrightcastlingallowed(input state_t state);
    return state.castlingallowed[3];
endfunction

task printtile(input fullpiece_t in_piece);
    
    case(in_piece.piece)
        EMPTY: begin $write("__"); return; end
        PAWN: $write("P");
        KNIGHT: $write("N");
        BISHOP: $write("B");
        ROOK: $write("R");
        QUEEN: $write("Q");
        KING: $write("K");
        3'd7:$write("INVALID PIECE!");
    endcase
    case(in_piece.color)
        BLACK: $write("B");
        WHITE: $write("W");
    endcase
    /*
     EMPTY  = 3'b000,
    PAWN   = 3'b001,
    KNIGHT = 3'b010,
    BISHOP = 3'b011,
    ROOK   = 3'b100,
    QUEEN  = 3'b101,
    KING   = 3'b110
    */
endtask

task printstate(input state_t state);
    for(int i=0;i<8;i=i+1)begin
        for(int j=0;j<8;j=j+1)begin
        printtile(state.board[i*8+j]);
        end
        $display();
    end
endtask
/*
function state_t get(input string str);
    $display("get string!");
    state_t to_ret='0;
    int i=0;
    while(i<64)begin
        case(str[i])
            "r":begin 
                to_ret.board[i].piece=ROOK;
                i=i+1;

            end
            default: begin
                i=i+1;
                 to_ret.board.piece=EMPTY;
            end
        endcase
    end
    return to_ret;
endfunction
*/
/*
function state_t get(input string str);
     //verilator lint_off IMPLICITSTATIC 
    state_t to_ret = '0;
    int iterator = 0;
    int p=0;
//verilator lint_on IMPLICITSTATIC
    while(p<64)begin
        if(iterator==str.len())begin
            $display("something here!");
            break;

        end
        case(str[iterator])
            47:begin
                end
            "r":begin
                to_ret.board[p].piece=ROOK;
                to_ret.board[p].color=BLACK;
                p=p+1;
            end
            "n":begin
                to_ret.board[p].piece=KNIGHT;
                to_ret.board[p].color=BLACK;
                p=p+1;
            end
            "b":begin
                to_ret.board[p].piece = BISHOP;
                to_ret.board[p].color = BLACK;
                p=p+1;
            end

            "q":begin
                to_ret.board[p].piece=QUEEN;
                to_ret.board[p].color=BLACK;
                p=p+1;
            end
            "k":begin
                to_ret.board[p].piece=KING;
                to_ret.board[p].color=BLACK;
                p=p+1;
            end
            "p":begin
                to_ret.board[p].piece = PAWN;
                to_ret.board[p].color = BLACK;
                p=p+1;
            end

            "R":begin
                to_ret.board[p].piece=ROOK;
                to_ret.board[p].color=WHITE;
                p=p+1;
            end
             "N":begin
                to_ret.board[p].piece = KNIGHT;
                to_ret.board[p].color = WHITE;
                p=p+1;
            end
             "B":begin
                to_ret.board[p].piece = BISHOP;
                to_ret.board[p].color = WHITE;
                p=p+1;
            end
             "Q":begin
                to_ret.board[p].piece = QUEEN;
                to_ret.board[p].color = WHITE;
                p=p+1;
                
            end
             "K":begin
                to_ret.board[p].piece = KING;
                to_ret.board[p].color = WHITE;
                p=p+1;
            end
             "P":begin
                to_ret.board[p].piece = PAWN;
                to_ret.board[p].color = WHITE;
                p=p+1;
                
            end
            "1":p=p+1;//I could probably write this in a more efficient manner!
            "2":p=p+2;
            "3":p=p+3;
            "4":p=p+4;
            "5":p=p+5;
            "6":p=p+6;
            "7":p=p+7;    
            "8":p=p+8;

            default:begin
                $display(str[iterator]);
                p=p+1;
                
            end
        endcase
        iterator=iterator+1;
    end
    $display("done with the first loop");
    $display("p: %0d iterator: %0d, len: %0d",p, iterator,str.len());
    to_ret.castlingallowed=4'd0;
     while(iterator<str.len())begin
        $display("we are in here!");
        case(str[iterator])
            "b":begin to_ret.playing=BLACK;$display("player is black!"); end
            "w":begin 
            to_ret.playing=WHITE;
            $display("setting player to white!");
            end
            "Q":to_ret.castlingallowed[0]=1'd1;
            "K": to_ret.castlingallowed[1]=1'd1;
            "k": to_ret.castlingallowed[3]=1'd1;
            "q":to_ret.castlingallowed[2]=1'd1;
            default:begin
                

            end
        endcase
        iterator=iterator+1;
     end
    
    return to_ret;
endfunction
*/
function automatic state_t get(input string str);
    state_t to_ret = '0;
    int i = 0;
    int p = 0;

    while (i < str.len() && str[i] != " ") begin
        case (str[i])
            "/": ;
            "1": p += 1;
            "2": p += 2;
            "3": p += 3;
            "4": p += 4;
            "5": p += 5;
            "6": p += 6;
            "7": p += 7;
            "8": p += 8;

            "r": begin to_ret.board[p].piece = ROOK;   to_ret.board[p].color = BLACK; p++; end
            "n": begin to_ret.board[p].piece = KNIGHT; to_ret.board[p].color = BLACK; p++; end
            "b": begin to_ret.board[p].piece = BISHOP; to_ret.board[p].color = BLACK; p++; end
            "q": begin to_ret.board[p].piece = QUEEN;  to_ret.board[p].color = BLACK; p++; end
            "k": begin to_ret.board[p].piece = KING;   to_ret.board[p].color = BLACK; p++; end
            "p": begin to_ret.board[p].piece = PAWN;   to_ret.board[p].color = BLACK; p++; end

            "R": begin to_ret.board[p].piece = ROOK;   to_ret.board[p].color = WHITE; p++; end
            "N": begin to_ret.board[p].piece = KNIGHT; to_ret.board[p].color = WHITE; p++; end
            "B": begin to_ret.board[p].piece = BISHOP; to_ret.board[p].color = WHITE; p++; end
            "Q": begin to_ret.board[p].piece = QUEEN;  to_ret.board[p].color = WHITE; p++; end
            "K": begin to_ret.board[p].piece = KING;   to_ret.board[p].color = WHITE; p++; end
            "P": begin to_ret.board[p].piece = PAWN;   to_ret.board[p].color = WHITE; p++; end

            default: begin
                $display("Unexpected char: %s", str[i]);
            end
        endcase
        i++;
    end

    while(i<str.len()) begin
        case(str[i])
        
            "b":begin to_ret.playing=BLACK;
            //$display("player is black!");
             end
            "w":begin to_ret.playing=WHITE; 
            //$display("setting player to white!"); 
            end
            "Q":to_ret.castlingallowed[0]=1'd1;
            "K": to_ret.castlingallowed[1]=1'd1;
            "k": to_ret.castlingallowed[3]=1'd1;
            "q":to_ret.castlingallowed[2]=1'd1;

        default: begin 
            //$display("unexpected char: %d",str[i]);
        end

        endcase
        i++;
    end


    return to_ret;
endfunction

/*
function state_t get(input string str);
 //verilator lint_off IMPLICITSTATIC 
    state_t to_ret = '0;
//verilator lint_on IMPLICITSTATIC
    
    for (int i = 0; i < 64; i++) begin
        case (str[i])
            "\\":begin
                i=i-1;
            end
            "r": begin 
                to_ret.board[i].piece = ROOK;
                to_ret.board[i].color= BLACK;
            end
            "n": begin
                to_ret.board[i].piece=KNIGHT;
                to_ret.board[i].color=BLACK;
            end
            "b": begin
                to_ret.board[i].piece=BISHOP;
                to_ret.board[i].color=BLACK;
            end
             "q": begin
                to_ret.board[i].piece=QUEEN;
                to_ret.board[i].color=BLACK;
            end
             "k": begin
                to_ret.board[i].piece=KING;
                to_ret.board[i].color=BLACK;
            end
             "p": begin
                to_ret.board[i].piece=PAWN;
                to_ret.board[i].color=BLACK;
            end

            default: to_ret.board[i].piece = EMPTY;
        endcase
    end

    return to_ret;
endfunction
*/

/*
 function automatic fullpiece_t getPiece(fullpiece_t board [63:0], logic [2:0] row, logic [2:0] col);
    return board[fullcoord(row,col)];
 endfunction
*/

endpackage;

